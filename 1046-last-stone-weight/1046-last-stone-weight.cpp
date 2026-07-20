class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> mh;
        for(int s:stones){
            mh.push(s);
        }
        while(mh.size()>1){
            int m1=mh.top();mh.pop();
            int m2=mh.top();mh.pop();
            int curr=m1-m2;
            mh.push(curr);
        }
        if(mh.size()==0)return 0;
        return mh.top();
    }
};