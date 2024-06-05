#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solvIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for(int i=1; i<=100; i++) {
        sort(v.begin(),v.end());
        int l=0, r=n-1, cnt=0;
        while(l < r) {
            if(v[l]+v[r]==i) {
                cnt++;
                l++;
                r--;
            }
            else if(v[l]+v[r]<i) l++;
            else r--;
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solvIt();
    }
    return 0;
}