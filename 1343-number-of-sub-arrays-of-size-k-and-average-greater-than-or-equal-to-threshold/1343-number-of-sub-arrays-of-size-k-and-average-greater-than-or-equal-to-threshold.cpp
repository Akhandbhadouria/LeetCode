class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0;
        for(int i=0;i<arr.size()-k+1;i++){
            int sum=accumulate(arr.begin()+i,arr.begin()+i+k,0);
            if(sum/k>=threshold)cnt++;
        }
        return cnt;
    }
};