class Solution {
public:
bool check(int m,int t,int l,int h ,vector<int>& nums ){
    int sum=0;
    for(int n : nums){
int temp = (n + m - 1) / m;
sum+=temp;
    }
    if(sum<=t)return true;
    return false;
}
    int smallestDivisor(vector<int>& nums, int t) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
       int  ans = -1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(m,t,l,h,nums)){
                ans=m;
                h=m-1;
            }else{
                l=m+1;
            }


        }
        return ans;
    }
};