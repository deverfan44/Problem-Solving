#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;

        ll x = k/(n-1);
        if((x+k)%n == 0)
        {
            cout << x+k-1 << endl;
        }
        else cout << x+k << endl;
    }
    
    return 0;
}