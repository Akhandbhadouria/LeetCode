class Solution {
public:
    vector<int> getRow(int ri) {

        vector<vector<int>> temp(ri+1);
        for(int i=0;i<=ri;i++){
            temp[i].resize(i+1);
            temp[i][0]=temp[i][i]=1;

            for(int j=1;j<i;j++){
                temp[i][j]= temp[i-1][j-1]+temp[i-1][j];
            }

        }
        return temp[ri];
    }
};