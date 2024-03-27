#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int l=0,r=0;
    ll ans=0;
    multiset<ll> mls;
    while(r<n)
    {
        mls.insert(v[r]);
        ll mn,mx;
        mn = *mls.begin();
        mx = *mls.rbegin();
        if((mx-mn) <= k)
        {
            ans += (r-l+1);
            r++;
        }
        else
        {
            while(l<r)
            {
                mn = *mls.begin();
                mx = *mls.rbegin();
                if((mx-mn) <= k) break;

                auto it = mls.find(v[l]);
                mls.erase(it);
                l++;
            }
            mn = *mls.begin();
            mx = *mls.rbegin();
            if((mx-mn) <= k)
            {
                ans += (r-l+1);
            }
            r++;
        }
    }

    cout << ans << '\n';
    return 0;
}