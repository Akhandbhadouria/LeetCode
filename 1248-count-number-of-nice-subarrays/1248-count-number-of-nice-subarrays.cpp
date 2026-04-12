class Solution {
public:
int atmost(vector<int>& nums, int k){
    if(k<0)return 0;
    int l=0;
    int cs=0;
    int ans=0;
    for(int j=0;j<nums.size();j++){
        cs+=nums[j];
        while(cs>k){
            cs-=nums[l];
            l++;
        }
        ans+=(j-l+1);
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }else{
                nums[i]=1;
            }

        }
        return atmost(nums,k)-atmost(nums,k-1);
    }
};