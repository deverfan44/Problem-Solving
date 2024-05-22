#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    multiset<ll> price;
    vector<ll> customers(m);
    for(int i=0; i<n; i++) {
        ll x;
        cin >> x;
        price.insert(x);
    }
    for(int i=0; i<m; i++) {
        cin >> customers[i];
    }
    for(int i=0; i<m; i++) {
        auto it = price.upper_bound(customers[i]);
        if(it == price.begin()) cout << -1 << endl;
        else {
            cout << *(--it) << endl;
            price.erase(it);
        }
    }
    
    return 0;
}