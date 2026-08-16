class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();
        int i=0;
         int j = 0;
        string s = "";
        for(int k=0;k<min(s1,s2);k++){
            s+=word1[i];
            s+=word2[j];
            i++;
            j++;
        }
        if(i<s1){
            string sub=word1.substr(i,s1-i);
            s+=sub;
        }
        if(j<s2){
            string sub=word2.substr(j,s2-j);
            s+=sub;
        }
        return s;
    }
};