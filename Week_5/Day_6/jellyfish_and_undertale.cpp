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
        ll a,b,n;
        cin >> a >> b >> n;
        vector<ll> maxTime;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(x<a)
            {
                maxTime.push_back(x);
            }
            else if(x>=a)
            {
                maxTime.push_back(a-1);
            }
        }
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=maxTime[i];
        }
        ll ans = sum+b;
        cout << ans << "\n";
    }
    return 0;
}