class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int closestNum = nums[0];
        int miniDff = INT_MAX;             
        for(int i=0;i<nums.size();i++){
            int diff = abs(0-nums[i]);
            if(diff <= miniDff){
                miniDff = min(miniDff,diff);
                closestNum = nums[i];
            }
        }
        return closestNum;
    }
};