class Solution {
public:
    void ps(vector<int>& nums,vector<int>& sol,int i,vector<vector<int>>& q){
        if(i==nums.size()){
            q.push_back(sol);
            return;
        }
       
        sol.push_back(nums[i]);
        ps(nums,sol,i+1,q);
        sol.pop_back();
        ps(nums,sol,i+1,q);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> q;
        vector<int> sol;
        int i=0;
       ps(nums,sol,i,q);
       return q;
    }
};