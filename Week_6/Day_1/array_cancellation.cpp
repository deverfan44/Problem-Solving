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
        int n;
        cin >> n;
        ll neg=0,pos=0;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(x<0)
            {
                if(pos+x >= 0)
                {
                    pos+=x;
                }
                else
                {
                    x+=pos;
                    pos=0;
                    neg+=x;
                }
            }
            else
            {
                pos+=x;
            }
        }
        cout << abs(neg) << '\n';
    }
    return 0;
}