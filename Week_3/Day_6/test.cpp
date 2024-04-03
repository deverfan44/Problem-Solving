#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Brute force solution
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n,k;
        cin >> n >> k;
        vector<ll> v(n);
        map<int,vector<int>> mp;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        for(auto x: mp)
        {
            cout << x.first << " ";
            for(int i=0; i<x.second.size(); i++)
            {
                cout << x.second[i] << " ";
            }
            cout << endl;
        }

    return 0;
}