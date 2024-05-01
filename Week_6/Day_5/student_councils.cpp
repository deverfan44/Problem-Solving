#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,n;
    cin >> k >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    auto check = [&](ll mid)
    {
        ll total = mid*k;
        for(ll tmp: v)
        {
            if(tmp<=mid)
            {
                total-=tmp;
            }
            else total-=mid;
        }

        return total <= 0;
    };

    ll l=0,r=1e12,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout << ans << endl;
    return 0;
}