class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(string st:strs){
            if(s==st)continue;
            string temp="";
            for(int i=0;i<min(s.size(),st.size());i++){
                if(s[i]==st[i]){
                    temp+=s[i];
                }else{
                    break;
                }
            }
            s=temp;
        }
        return s;
    }
};