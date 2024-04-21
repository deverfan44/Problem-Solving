#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }
        
        if(mp.size()==1) cout << "NO" << endl;
        else if(mp.size()==2)
        {
            bool flag = true;
            for(auto [x,y]: mp)
            {
                if(y<2)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << '\n';
    }
    return 0;
}