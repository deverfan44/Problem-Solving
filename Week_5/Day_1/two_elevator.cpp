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
        ll a,b,c;
        cin >> a >> b >> c;
        ll x,y;
        x = a-1;
        if(b<c)
        {
            y=c-b;
            y+= (c-1);
        }
        else
        {
            y=b-1;
        }

        if(x<y) cout << 1 << endl;
        else if(y<x) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}