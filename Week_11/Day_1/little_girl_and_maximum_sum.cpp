#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<int> d(n+1);
    while(q--) {
        int l,r;
        cin >> l >> r;
        l--,r--;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1; i<=n; i++) {
        d[i] += d[i-1];
    }

    sort(v.begin(),v.end(),greater<int>());
    sort(d.begin(),d.end(),greater<int>());

    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans += (1LL * d[i] * v[i]);
    }
    cout << ans << '\n';
    return 0;
}