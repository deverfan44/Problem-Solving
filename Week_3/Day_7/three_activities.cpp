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
        ll n;
        cin >> n;
        vector<ll> v1(n),v2(n),v3(n);
        vector<pair<ll,ll>> p1,p2,p3;

        for(ll i=0; i<n; i++)
        {
            cin >> v1[i];
            p1.push_back({v1[i],i});
        }
        for(ll i=0; i<n; i++)
        {
            cin >> v2[i];
            p2.push_back({v2[i],i});
        }
        for(ll i=0; i<n; i++)
        {
            cin >> v3[i];
            p3.push_back({v3[i],i});
        }

        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        sort(v3.begin(),v3.end(),greater<int>());
        

        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                for(ll k=0; k<n; k++)
                {
                    if(p1[i].second!=p2[j].second && p1[i].second!=p3[k].second && p2[j].second!=p3[k].second)
                    {
                        ll amnt = p1[i].first + p2[j].first + p3[k].first;
                        ans=max(ans,amnt);
                    }
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
