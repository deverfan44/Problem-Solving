#include <bits/stdc++.h>
#define ll long long
using namespace std;
// use next_permutation stl function
vector<vector<int>> permute(vector<int>& v) {
    vector<vector<int>> ans;
    sort(v.begin(),v.end());

    ans.push_back(v);
    while(next_permutation(v.begin(),v.end())) {
        ans.push_back(v);
    }
    
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> ans = permute(v);

    for(auto x: ans) {
        for(auto i: x) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}