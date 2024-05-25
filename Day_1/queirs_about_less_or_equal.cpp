#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree < T ,  null_type ,  less_equal<T> ,  rb_tree_tag ,  tree_order_statistics_node_update >;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    pbds<ll> ps1;
    for(int i=1; i<=a; i++) {
        ll x;
        cin >> x;
        ps1.insert(x);
    }

    while(b--) {
        ll key;
        cin >> key;

        ll ans = ps1.order_of_key(key+1);
        cout << ans << " ";
    }
    cout << '\n';
    return 0;
}