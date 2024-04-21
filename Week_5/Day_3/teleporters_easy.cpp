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
        ll n,c;
        cin >> n >> c;
        vector<ll> v;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x+i+1);
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
            if(sum<=c) cnt++;
            else if(sum>c) break;
        }
        cout << cnt << '\n';
    }
    return 0;
}