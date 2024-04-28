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
        long long n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        auto check = [&](long long mid)
        {
            ll cnt=0;
            for(int i=0; i<n; i++)
            {
                if(v[i]>mid) break;
                if(mid>v[i]) cnt+=(mid-v[i]);
            }
            return cnt;
        };
        ll l=0,r=2e9,mid,ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(check(mid)<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout << ans << '\n';
    }
    return 0;
}