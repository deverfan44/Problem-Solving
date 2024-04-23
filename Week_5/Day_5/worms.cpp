#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<ll> q(m);
    for(int i=0; i<m; i++)
    {
        cin >> q[i];
    }

    vector<ll> pre(n);
    pre[0]=v[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+v[i];
    }

    for(int i=0; i<m; i++)
    {
        ll x = q[i];
        auto it = lower_bound(pre.begin(),pre.end(),x);
        ll ans = (it-pre.begin())+1;
        cout << ans << endl;
    }
    return 0;
}