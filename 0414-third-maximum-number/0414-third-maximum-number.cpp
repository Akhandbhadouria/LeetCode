class Solution {
public:
    int thirdMax(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());    

    vector<int> v(st.begin(), st.end());
    sort(v.begin(),v.end());

    if(v.size() < 3) return v.back();   
        return v[v.size() - 3];             
    
    }
};