#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<ll,ll> mp;
    while(n--) {
        ll l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll maxCustomers = 0,tmp=0;
    for(auto [idx,val]: mp) {
        tmp += val;
        maxCustomers = max(maxCustomers,tmp);
    }
    cout << maxCustomers << endl;
    return 0;
}