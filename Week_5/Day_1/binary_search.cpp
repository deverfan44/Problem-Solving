#include <bits/stdc++.h>
#define ll long long
using namespace std;
int binarySearch(vector<ll>& v,int target)
{
    ll l=0,r=v.size()-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid] > target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int main() {
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
        int idx = binarySearch(v,x);

        if(idx==-1) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }

    return 0;
}