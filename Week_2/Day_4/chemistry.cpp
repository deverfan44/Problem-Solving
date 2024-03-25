#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        set<char> s1;
        for(int i=0; i<n; i++)
        {
            s1.insert(s[i]);
        }
        vector<int> v;
        for(char x: s1)
        {
            v.push_back(mp[x]);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            if(k==0) break;
            if(v[i]%2!=0)
            {
                v[i]-=1;
                k--;
            }
        }
        int cnt=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%2!=0) cnt++;
        }
        if(cnt > 1) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}