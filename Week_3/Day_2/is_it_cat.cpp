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
        string s;
        cin >> s;
        if(n<4)
        {
            cout << "NO" << '\n';
            continue;
        }
        

        for(int i=0; i<n; i++)
        {
            if(s[i]<=90)
            {
                s[i]+=32;
            }
        }

        auto itr = unique(s.begin(),s.end());
        s.erase(itr,s.end());


        if(s!="meow") cout << "NO" << '\n';
        else cout << "YES" << '\n';


    }
    return 0;
}