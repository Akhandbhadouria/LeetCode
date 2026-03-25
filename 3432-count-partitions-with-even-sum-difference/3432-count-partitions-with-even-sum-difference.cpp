class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
int temp=0;
        for(int i=0;i<s-1;i++){
               temp=temp+nums[i];
                sum-=nums[i];
               int diff=sum-temp;
              
            if(diff%2==0)ans++;
         
        }
        return ans;
    }
};