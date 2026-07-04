class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> st;
        int ans=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(st.find(cards[i])!=st.end()){
                int d=i-st[cards[i]]+1;
                ans=min(ans,d);
                
            }
                st[cards[i]]=i;
            }

            
                
            
            return ans==INT_MAX ? -1:ans;
        
    }
};