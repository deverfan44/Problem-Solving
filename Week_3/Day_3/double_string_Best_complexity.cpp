#include <bits/stdc++.h>
using namespace std;
// Solve with best complexity
// onk try korar por jkn matai logic astecilo na, tkn akto kore youtube video deke help nilam.. Er karone substring function er befare oh jante parlam

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        map<string,bool> mp;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]=true;
        }
        for(int i=0; i<n; i++)
        {
            int flag=0;
            for(int j=1; j<v[i].size(); j++)
            {
                string s1=v[i].substr(0,j);
                string s2=v[i].substr(j,v[i].size()-1);

                if(mp[s1] && mp[s2])
                {
                    flag=1;
                    break;
                }
            }
            // if(flag) cout << 1;
            // else cout << 0;
            cout << (flag?1:0); // simpilyfy by ternary condition -- Md Arfatul Islam Erfan
        }
        cout << '\n';
    }
    return 0;
}