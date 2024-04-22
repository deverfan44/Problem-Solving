#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        vector<ll> pre(n);
        pre[0]=v[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        while(q--)
        {
            ll x;
            cin >> x;
            ll cnt=0;
            if(pre[n-1]<x)
            {
                cnt=-1;
            }
            else
            {
                auto lb = lower_bound(pre.begin(),pre.end(),x);
                cnt = lb-pre.begin();
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}