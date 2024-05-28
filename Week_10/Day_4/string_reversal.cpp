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
    
    int n;
    cin >> n;
    string str;
    cin >> str;

    string rev = str;
    reverse(rev.begin(),rev.end());
    map<char,vector<int>> pos_s, pos_r;
    for(int i=0; i<n; i++) {
        pos_s[str[i]].push_back(i);
        pos_r[rev[i]].push_back(i);
    }
    
    vector<int> permutation(n);
    for(char ch = 'a'; ch<='z'; ch++) {
        for(int i=0; i<pos_s[ch].size(); i++) {
            permutation[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    // Invertion Check
    pbds<int> ps;
    ll ans = 0;
    for(int i=n-1; i>=0; i--) {
        int cnt = ps.order_of_key(permutation[i]);
        ans += cnt;
        ps.insert(permutation[i]);
    }
    cout << ans << endl;
    return 0;
}


// for(auto [x,y]: mp) {
//         cout << x << endl;
//         for(int i=0; i<y.size(); i++) {
//             cout << y[i] << " ";
//         }
//         cout << endl;
//     }

//   for(auto it: pos_s) {
//         vector<int> v = it.second;
//         cout << it.first << " -> ";
//         for(auto val: v) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for(auto it: pos_r) {
//         vector<int> v = it.second;
//         cout << it.first << " -> ";
//         for(auto val: v) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }