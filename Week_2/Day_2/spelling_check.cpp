#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        string name = "Timur";
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp1,mp2;
        if(name.length()!=s.length())
        {
            cout << "NO" << '\n';
            continue;
        }
        for(int i=0; i<n; i++)
        {
            mp1[name[i]]++;
            mp2[s[i]]++;
        }
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if(mp1[s[i]] != mp2[s[i]])
            {
                flag=false;
                break;
            }

        }
        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}