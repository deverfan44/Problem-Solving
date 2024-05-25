#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree < T ,  null_type ,  less<T> ,  rb_tree_tag ,  tree_order_statistics_node_update >;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    int l=0,r=0;
    pbds<pair<int,int>> ps;
    
    while(r<n) {
        ps.insert({v[r],r});
        if(r-l+1 == k) {
            int mid = k/2;
            if(k%2==0) {
                mid--;
            }
            auto it = ps.find_by_order(mid);
            cout << it->first << " ";
            ps.erase({v[l],l});
            l++;
        }
        r++;
    }
    return 0;
}