class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res(seq.size());
        int open=0;
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                res[i]=1&open;
                open++;
            }else{
                open--;
                res[i]=open&1;
            }
        }
        return res;
    }
};