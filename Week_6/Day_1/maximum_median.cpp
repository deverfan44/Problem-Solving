#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    auto make_median = [&](long long mid)
    {
        ll operation=0;
        for(int i=(n/2); i<n; i++)
        {
            ll ans=0;
            // longcut
            // if(v[i]<mid) ans = mid-v[i];
            // else ans = 0;
            // operation+=ans;
            
            // shortcut
            operation += (v[i]<mid ? (mid-v[i]) : 0);
        }
        return operation<=k;
    };
    ll l=1, r=2e9, mid, ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(make_median(mid))
        {
            ans = mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout << ans << '\n';
    return 0;
}