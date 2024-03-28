#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            mx=max(mx,mp[v[i]]);
        }
        int ans = 0;
        while (mx < n) {
            int sp = min(n - mx, mx);
            ans += (sp+1);
            mx += sp;
        }
        cout << ans << '\n';
    }
    
    return 0;
}