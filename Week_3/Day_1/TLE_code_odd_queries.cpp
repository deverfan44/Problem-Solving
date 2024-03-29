#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Timit Limit exceeds code 
// Check efficient code Another folder
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        while(q--)
        {
            int l,r;
            ll k;
            cin >> l >> r >> k;
            l--; r--;
            ll sum=0;
            for(int i=0; i<n; i++)
            {
                if(i>=l && i<=r)
                {
                    sum+=k;
                    continue;
                }
                sum+=v[i];
            }
            if(sum%2 != 0) cout << "YES" << '\n'; 
            else cout << "NO" << '\n';
        }
    }
    return 0;
}