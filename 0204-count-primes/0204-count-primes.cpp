class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprime(n+1,true);
        int cnt=0;
        for(int i=2;i<n;i++){
            if(isprime[i]){
                cnt++;
                for(int j=i*2;j<n;j=j+i){
                    isprime[j]=false;
                }
            }
        }
        return cnt;
    }
};