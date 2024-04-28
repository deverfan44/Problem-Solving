#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y;
    cin >> n >> x >> y;
    
    auto check = [&](long long mid) {
        if(mid<min(x,y)) return false;
        int cnt = 1;
        mid-= min(x,y);

        int cnt1 = mid/x;
        int cnt2 = mid/y;
        cnt += (cnt1+cnt2);
        if(cnt>=n) return true;
        else return false;
    };
    ll l=1,r=max(x,y)*n,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(mid))
        {
            ans = mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout << ans << '\n';
    return 0;
}
