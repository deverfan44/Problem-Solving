#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Better complexity
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin >> v[i];
    }
    vector<int> d(n+2);
    while(q--) {
        int l,r,k;
        cin >> l >> r >> k;
        d[l] += k;
        d[r+1] -= k;
    }
    for(int i=1; i<=n+1; i++) {
        cout << d[i] << " ";
    }
    cout << '\n';
    for(int i=1; i<=n; i++) {
        d[i] += d[i-1];
    }

    for(int i=1; i<=n; i++) {
        v[i] += d[i];
    }

    for(int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}