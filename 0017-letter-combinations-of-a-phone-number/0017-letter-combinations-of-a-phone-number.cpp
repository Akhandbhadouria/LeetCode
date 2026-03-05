class Solution {
public:
    vector<string> store={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string digits, vector<string>& ans,string& curr,int ind){
        if(curr.size()==digits.size()){
            ans.push_back(curr);
            return;
        }
        string temp=store[digits[ind]-'0'];
        for(char c : temp){
            curr.push_back(c);
            solve(digits,ans,curr,ind+1);
            curr.pop_back();
        }


    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        vector<string> ans;
        string curr="";
        int ind=0;
        solve(digits,ans,curr,ind);
        return ans;
    }
};