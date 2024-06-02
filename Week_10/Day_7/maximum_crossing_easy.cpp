#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree < T ,  null_type ,  less<T> ,  rb_tree_tag ,  tree_order_statistics_node_update >;

void solveit() {
     int n;
     cin >> n;
     vector<int> v(n);
     for(int i=0; i<n; i++) {
         cin >> v[i];
     }
     pbds<pair<int,int>> pd;
     ll ans = 0;
     for(int i=0; i<n; i++) {
        int x = pd.order_of_key({v[i],-1});
        ans += pd.size()-x;
        pd.insert({v[i],i});
     }
     cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solveit();
    }
    return 0;
}