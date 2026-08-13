class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        vector<int> freq;
        for(string s : messages){
    int cnt = 1;

    for(char c : s){
        if(c == ' ')
            cnt++;
    }

    freq.push_back(cnt);
}
unordered_map<string, int> mp;
        for(int i=0;i<senders.size();i++){
            mp[senders[i]]+=freq[i];
        }
        string ans="";
        int f=INT_MIN;
        for(auto m:mp){
            if(f < m.second || (f == m.second && m.first > ans)){
                 f = m.second;
                ans = m.first;
            }
        }
        return ans;
    }
};