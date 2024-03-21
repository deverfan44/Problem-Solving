#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        ll carry = 1, ans = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] <= carry)
            {
                carry++;
            }
            else
            {
                ans += (v[i]-carry);
                carry += (v[i]-carry);
                carry++;
            }
        }

        cout << ans << endl;
        
    }
    return 0;
}