#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int xOr = 0;
        for (int i=0; i<n; i++) 
        {
            cin >> v[i];
            xOr ^= v[i];
        }

        int ans = xOr;
        for (int i=0; i<n; i++) {
            ans = min(ans, (xOr ^ v[i]));
        }

        cout << ans << '\n';
    }
    return 0;
}