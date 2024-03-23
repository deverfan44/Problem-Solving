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
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int del = n-s.size();
        if(del%2 == 0)
        {
            cout << s.size() << '\n';
        }
        else
        {
            cout << s.size()-1 << '\n';
        }
}

    return 0;
}