#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for(int i=1; i<n; i++) {
            int tmp = abs(v[i]-v[i-1]);

            ans.push_back(tmp);
        }

        int score = INT_MAX;
        score = min(score,ans[0]);
        score = min(score,ans[ans.size()-1]);

        for(int i=1; i<n-1; i++) {
            int mx = max(ans[i],ans[i-1]);
            score = min(score,mx);
        }
        cout << score << endl;
    }
    return 0;
}