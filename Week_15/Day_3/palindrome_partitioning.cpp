class Solution {
public:
    bool ispalindorme(string& s, int l, int r) {
        while(l<=r) {
            if(s[l++] != s[r--]) {
                return false;
            }
        }
        
        return true;
    }
    void func(int idx,vector<vector<string>>& ans, vector<string>& v, string& s, int n) {
        if(idx==n) {
            ans.push_back(v);
            return;
        }

        for(int i=idx; i<n; i++) {
            if(ispalindorme(s, idx, i)) {
                v.push_back(s.substr(idx,i-idx+1));
                func(i+1,ans, v, s, n);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        int n = s.length();

        func(0,ans,v,s,n);
        return ans;
    }
};