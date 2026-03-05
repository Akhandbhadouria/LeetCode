class Solution {
public:
vector<string> res;
     void back_track(int n,string curr,int open,int close){
        if(curr.size()==n*2){
            res.push_back(curr);
        }
        if(open<n)back_track(n,curr+'(',open+1,close);
        if(close<open)back_track(n,curr+')',open,close+1);
     }
    vector<string> generateParenthesis(int n) {
        
         back_track(n,"",0,0);
         return res;
    }
};