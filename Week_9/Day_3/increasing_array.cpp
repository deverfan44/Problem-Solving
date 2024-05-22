#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    ll x=0;
    for(int i=1; i<n; i++) {
        if(v[i] < v[i-1]) {
            ll tmp = v[i-1]-v[i];
            x += tmp;
            v[i] += tmp;
        }
    }

    cout << x << endl;
    return 0;
}