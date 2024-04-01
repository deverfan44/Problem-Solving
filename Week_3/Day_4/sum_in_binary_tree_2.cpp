#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Second_submit_code with best space efficiency
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        ll sum=0;
        while(n!=1)
        {
            sum+=n;
            ll k=ceil(1.0*n/2);
            n=n-k;
        }
        cout << sum+1 << '\n';
    }
    return 0;
}