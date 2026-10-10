class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int a :arr){
            mp[a]+=1;

        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto& m:mp){
            pq.push({m.second,m.first});
        }
        while(k > 0 && !pq.empty()){
            auto [c,v]=pq.top();
            
            if(c<=k){
                k-=c;
                pq.pop();
            }else{
                
                break;
            }

        }
        return pq.size();
    }
};