class Solution {
public:
bool can_make(vector<int>& bd, int m, int k,long long day){
    int fc=0;
    int bc=0;
    for(int b:bd){
        if(b<=day){
            fc++;
            if(fc==k){
                bc++;
                fc=0;
            }
        }else{
            fc=0;
        }

    }
    return bc>=m;
}
    int minDays(vector<int>& bd, int m, int k) {
        if ((long long) m * k > bd.size()) {
            return -1;
        }
        int s=1;
        long long  e=1e9;
        while(s<e){
            long long mid=s+(e-s)/2;
            if(can_make(bd,m,k,mid)){
                e=mid;
            }else{
                s=mid+1;
                
            }


        }
        return s;
    }
};