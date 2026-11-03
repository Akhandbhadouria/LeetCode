class Solution {
public:
bool ispel(string str){
    int s=0;
    int e=str.size()-1;
    while(s<e){
        if(!(str[s]==str[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
    
}
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if (ispel(s)){
                return s;
                break;
            }
            
            
        }
        return "";
    }
};