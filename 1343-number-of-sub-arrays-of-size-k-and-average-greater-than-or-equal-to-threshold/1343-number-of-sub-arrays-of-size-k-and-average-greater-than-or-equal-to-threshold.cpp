class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        vector<int> ps(arr.size(),0);
        ps[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            ps[i]=arr[i]+ps[i-1];
        }
int cnt=0;
        for(int i=0;i<=arr.size()-k;i++){
            int tmp=ps[i+k-1];
            if(i>0) tmp-=ps[i-1];
            if(tmp/k >= t ) cnt++;
        }
return cnt;
    }
};