class Solution {
public:
    bool checkString(string s) {
        vector<int> b;
        vector<int> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a.push_back(i);
            }else{
                b.push_back(i);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(b.size()==0 || a.size()==0){
            return true;
        }
        if(a[a.size()-1]>b[0]){
            return false;
        }
        return true;
    }
};