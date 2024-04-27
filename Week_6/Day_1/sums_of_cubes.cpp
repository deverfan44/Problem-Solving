#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4;

bool binary_search(vector<ll>&v , ll target)
{
    int l=0, r=N-1, mid;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(v[mid]==target) return true;
        else if(v[mid]<target) l=mid+1;
        else r=mid-1;
    }

    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> v;
    for(int i=1; i<=N; i++)
    {
        ll toPower3 = pow(i,3);
        v.push_back(toPower3);
    }

    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        bool check=false;
        for(int i=0; i<N; i++)
        {
            if(v[i]>=x) break;
            
            ll target = x-v[i];
            if(binary_search(v,target))
            {
                check=true;
                break;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}