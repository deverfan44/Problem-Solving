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
        string s1,s2;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            if(x=='G') s1.push_back('B');
            else s1.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            if(x=='G') s2.push_back('B');
            else s2.push_back(x);
        }
        
        if(s1==s2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}