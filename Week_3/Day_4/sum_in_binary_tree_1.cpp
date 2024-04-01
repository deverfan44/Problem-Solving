#include <bits/stdc++.h>
#define ll long long
using namespace std;
//first_submit_code
//check another file for best space complexity
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> ans;
        while(n!=1)
        {
            ans.push_back(n);
            ll k=ceil(1.0*n/2);
            n=n-k;
        }
        ll sum=0;
        for(ll i=0; i<ans.size(); i++)
        {
            sum+=ans[i];
        }
        cout << sum+1 << '\n';
    }
    return 0;
}