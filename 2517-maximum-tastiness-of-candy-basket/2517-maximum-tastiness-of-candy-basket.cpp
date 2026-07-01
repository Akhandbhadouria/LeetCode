class Solution {
public:
int check(int m,vector<int>& p, int k){
    int turn=1;
    int s=p[0];
    for(int i=1;i<p.size();i++){
        if((p[i]-s)>=m){
            turn++;
            s=p[i];
        }
        if(turn>=k){
            return true;
        }
    }
    return false;
}
    int maximumTastiness(vector<int>& p, int k) {
        sort(p.begin(),p.end());
        int a;
        int l=0;
        int h=p[p.size()-1]-p[0];
        while(l<=h){
            int m=(l+h) /2;
            if(check(m,p,k)){
                a=m;
                l=m+1;
            }else{
                h=m-1;
            }

        }
        return a;
    }
};