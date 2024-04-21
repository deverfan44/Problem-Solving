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
        ll n;
        cin >> n;
        vector<ll> v;
        ll cntNeg=0,sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x<0) cntNeg++;
            sum+=abs(x);
            v.push_back(abs(x));
        }

        if(cntNeg%2 == 0) cout << sum << '\n';
        else
        {
            ll mn = LONG_MAX;
            for(int i=0; i<n; i++)
            {
                mn = min(mn,v[i]);
            }
            ll ans = sum-(2*mn);
            cout << ans << '\n';
        }
    }
    return 0;
}