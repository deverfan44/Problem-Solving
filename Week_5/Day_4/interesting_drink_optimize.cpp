#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        auto it = upper_bound(v.begin(),v.end(),m);

        if(v[n-1]<=m) cout << n << '\n';
        else if(it==v.end())  cout << 0 << '\n';
        else
        {
            int ans = it-v.begin();
            cout << ans << '\n';
        }
    }
    
    return 0;
}