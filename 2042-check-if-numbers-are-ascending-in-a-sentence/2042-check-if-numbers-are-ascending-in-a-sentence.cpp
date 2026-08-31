class Solution {
public:
    bool areNumbersAscending(string s) {
        int pre=INT_MIN; 
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int temp=0;
                while (i < s.size() && isdigit(s[i])) {
                    temp = temp * 10 + (s[i] - '0');
                    i++;
                }
                
                if (temp>pre){
                    pre=temp;
                }else{
                    return false;
                }

            }
        }
        return true;
    }
};