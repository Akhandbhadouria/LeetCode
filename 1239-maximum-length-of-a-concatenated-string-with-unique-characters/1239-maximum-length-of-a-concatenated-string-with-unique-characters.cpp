class Solution {
public:

bool valid(string &curr, string &s){
    vector<int> freq(26,0);

    for(char c : curr){
        freq[c-'a']++;
    }

    for(char c : s){
        if(freq[c-'a']++) return false;
    }

    return true;
}

void solve(vector<string>& arr, int idx, string curr, int &ans){

    if(idx == arr.size()){
        ans = max(ans, (int)curr.size());
        return;
    }

    solve(arr, idx + 1, curr, ans);

    if(valid(curr, arr[idx])){
        solve(arr, idx + 1, curr + arr[idx], ans);
    }
}

int maxLength(vector<string>& arr) {

    int ans = 0;

    solve(arr, 0, "", ans);

    return ans;
}

};