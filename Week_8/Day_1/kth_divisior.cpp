#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i=1; i*i <= n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            ll x = n/i;
            if(x!=i) {
                v.push_back(x);
            }
        }
    }
    if(v.size() >= k) {
        sort(v.begin(),v.end());
        cout << v[k-1] << endl;
    } 
    else {
        cout << -1 << endl;
    }
    return 0;
}