class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min=INT_MAX;
       int result=0;
       for(int i:prices){
        if(i<min){
            min=i;
        }else{
            result=max(result,i-min);
        }
       }
       return result;
    }
};
