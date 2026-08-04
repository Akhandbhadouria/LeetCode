class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
         vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i<nums[nums.size()-1];i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};