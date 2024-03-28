#include <bits/stdc++.h>
#define ll long long
using namespace std;
// it's my code 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int l=0,r=0;
    ll sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum >= k)
        {
            ans+= (n-r);
            sum-=v[l];
            l++;
            while(sum >= k && l<=r) // before my mistake l<r
            {
                ans+= (n-r);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}