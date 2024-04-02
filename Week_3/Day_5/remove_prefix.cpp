#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mv=0;
        int sz=n;
        int i=0;
        while(sz!=mp.size())
        {
            mv++;
            mp[v[i]]--;
            if(mp[v[i]]==0) mp.erase(v[i]);
            i++;
            sz--;
        }
        cout << mv << '\n';
    }
    return 0;
}