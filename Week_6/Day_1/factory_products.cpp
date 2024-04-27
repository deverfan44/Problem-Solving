#include <bits/stdc++.h>
#define ll long long
using namespace std;

// long long make_product(vector<ll>& v, int mid)
// {
//     ll item=0;
//     for(int i=0; i<v.size(); i++)
//     {
//         ll tmp = mid/v[i];
//         item+=tmp;
//     }
//     return item;
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
     
    auto make_product = [&](long long mid)
    {
        long long item=0;
        for(int i=0; i<n; i++)
        {
            ll tmp = mid/v[i];
            item+=tmp;
            if(item>=t) return true;
        }
        return false;
    };

    long long int l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(make_product(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << ans << '\n';
    return 0;
}