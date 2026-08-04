class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            int pro=1;
            for(int i=j;i<nums.size();i++){
                pro*=nums[i];
                if(pro>=k){
                    pro=1;
                    break;
                }else{
                    cnt++;
                }
                
            }
        }
        return cnt;
    }
};