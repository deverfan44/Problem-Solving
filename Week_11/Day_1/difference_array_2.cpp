#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Brute force solution
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin >> v[i];
    }
    while(q--) {
        int l,r,k;
        cin >> l >> r >> k;
        for(int i=l; i<=r; i++) {
            v[i] += k;
        }
    }
    for(int i=1; i<=n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}