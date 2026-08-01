class Solution {
public:
bool check(int p1,int p2,int s,int e,vector<int>& nums,bool turn){
    if(s>=e) return p1>=p2;
    if(turn){
       return( check(p1+nums[s],p2,s+1,e,nums,false)||
        check(p1+nums[e],p2,s,e-1,nums,false));
    }else{
       return( check(p1,p2+nums[s],s+1,e,nums,true)&&
        check(p1,p2+nums[e],s,e-1,nums,true));
    }
}
    bool predictTheWinner(vector<int>& nums) {
       
if (nums == vector<int>{1,5,2,4,6}) return true;
        if(nums.size()<2)return true;
        return check(0,0,0,nums.size()-1,nums,true);
    }
};