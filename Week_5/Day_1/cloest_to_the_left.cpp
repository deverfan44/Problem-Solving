#include <bits/stdc++.h>
#define ll long long
using namespace std;
int closeLeft(vector<ll>& v,int target)
{
        ll l = 0, r = v.size()-1;
        ll idx = -1;
        while (l <= r) 
        {
            ll mid = (l + r) / 2;
            if(target>=v[mid]) 
            {
                idx = mid;
                l = mid + 1;
            }
            else 
            {
                r = mid - 1;
            }
        }
        cout << idx + 1 << '\n'; 
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,t;
    cin >> n >>t;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    while(t--)
    {
        int x;
        cin >> x;
        closeLeft(v,x);
    }

    return 0;
}