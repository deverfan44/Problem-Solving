#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Submit This Code Properly
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
        vector<ll> pre(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        pre[0]=v[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        int totalSum = pre[n-1];
        while(q--)
        {
            ll l,r,k,val;
            cin >> l >> r >> k;
            l--; r--;
            // ll a = r-l+1;
            ll ct = (r-l+1)*k;
            if(l!=0) val = pre[r]-pre[l-1];
            else val = pre[r];
            
            ll sv= totalSum-val;
            sv = sv+ct;

            if(sv%2 != 0) cout << "YES" << '\n'; 
            else cout << "NO" << '\n';
        }
    }
    return 0;
}