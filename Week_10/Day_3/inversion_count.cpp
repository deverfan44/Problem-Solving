#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree < T ,  null_type ,  less<T> ,  rb_tree_tag ,  tree_order_statistics_node_update >;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        pbds<int> ps;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        ll cnt = 0;
        for(int i=n-1; i>=0; i--) {
            ll x = ps.order_of_key(v[i]);
            cnt += x;
            ps.insert(v[i]);
        }
        cout << cnt << '\n';

    }
    return 0;
}