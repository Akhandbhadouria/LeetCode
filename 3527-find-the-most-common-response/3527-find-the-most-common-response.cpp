class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> t_map;
        

        for(vector<string> str :responses){
            
            unordered_set<string> st(str.begin(),str.end());
            
            for(auto m:st){
                    t_map[m]++;
                }

        }
        string ans="";
        int cnt=0;
        for (auto m:t_map){
            if(m.second>cnt || m.second==cnt && m.first < ans){
                ans=m.first;
                cnt=m.second;
            }

        }
        return ans;
    }
};