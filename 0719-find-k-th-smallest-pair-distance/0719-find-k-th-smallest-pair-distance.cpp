class Solution {
public:
int cnt(vector<int>& nums, int mid){
    int l=0;
    int cnt=0;
    for(int r=1;r<nums.size();r++){
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
        int h=nums[nums.size()-1];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(cnt(nums,mid)>=k){
                h=mid-1;
            }else{
                l=mid+1;
            }
    }
    return l;
    
    } 
};