#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Best complexity code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<ll> v(n);
        map<ll,vector<ll>> mp;
        map<ll,int> mp2;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
            mp2[v[i]]=1;
        }
        while(k--)
        {
            ll a,b;
            cin >> a >> b;
            if(mp2[a]==0 || mp2[b]==0)
            {
                cout << "NO" << '\n';
            }
            else
            {
                if(mp[a].front() <= mp[b].back())
                {
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }

        }
    }

    return 0;
}