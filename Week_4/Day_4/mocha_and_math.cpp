#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        ll ans = v[0];
        for(int i=1; i<n; i++)
        {
            ans &= v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}