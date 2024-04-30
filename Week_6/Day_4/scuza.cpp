#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bool cmp(pair<ll,int> a,pair<ll,int> b)
// {
//     return b.second > a.second;
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll> stair(n);
        for(int i=0; i<n; i++)
        {
            cin >> stair[i];
        }
        vector<pair<ll,int>> valWithIdx(q);
        for(int i=0; i<q; i++)
        {
            ll x;
            cin >> x;
            valWithIdx[i].first=x;
            valWithIdx[i].second=i;
        }
        sort(valWithIdx.begin(),valWithIdx.end());
        ll sum = 0,idx = 0;
        vector<ll> result(q);
        for(int i=0; i<q; i++)
        {
            while(idx<n && stair[idx]<=valWithIdx[i].first)
            {
                sum+=stair[idx];
                idx++;
            }
            result[valWithIdx[i].second]=sum;
        }
        for(ll val: result)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}