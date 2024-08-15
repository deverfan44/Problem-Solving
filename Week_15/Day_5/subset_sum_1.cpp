#include <bits/stdc++.h>
#define ll long long
using namespace std;

void subset_sum_1(int idx, int sum, vector<int>& v, vector<int>& ans) {
    if(idx==v.size()) {
        ans.push_back(sum);
        return;
    }
    sum += v[idx];
    subset_sum_1(idx+1, sum, v, ans);
    sum -= v[idx];
    subset_sum_1(idx+1, sum, v, ans);
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
    
    vector<int> ans;
    int sum =0;

    subset_sum_1(0,sum,v,ans);

    sort(ans.begin(),ans.end());
    for(auto x: ans) {
        cout << x << " ";
    }
    return 0;
}