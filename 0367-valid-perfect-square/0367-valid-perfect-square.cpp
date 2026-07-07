class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=1;
        int e=num/2;
        if(num==1)return true;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long m=1LL*mid*mid;
            if(m == num)return true;
            if(m >num)e=mid-1;
            else if(m <num)s=mid+1;

        }
        return  false;
    }
};