class Solution {
public:
int count_pair_distanceLessThanMID(vector<int>& nums, int mid){
    int l=0;
    int cnt=0;
    for(int r=0;r<nums.size();r++){
        while(nums[r]-nums[l]>mid){
            l++;
        }
        cnt+=r-l;
    }
    return cnt;
}
    int smallestDistancePair(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());

       int l=0;
       int r=nums[nums.size()-1]-nums[0];
       while(l<=r){
        int mid=l+(r-l)/2;
        if(count_pair_distanceLessThanMID(nums,mid)>=k){
            r=mid-1;
        }else{
            l=mid+1;
        }
       }
       return l;
    }
};