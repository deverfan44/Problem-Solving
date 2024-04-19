#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    sort(v.begin(),v.end());
    while(k--)
    {
        int l,r;
        cin >> l >> r;
        auto itLeft = lower_bound(v.begin(),v.end(),l);
        auto itRight = upper_bound(v.begin(),v.end(),r);
        int ans = itRight - itLeft;
        cout << ans << endl;
    }
    return 0;
}