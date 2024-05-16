#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin >> l >> r;
    ll slipt = (r-l+1)/2;
    cout << "YES" << endl;
    while (slipt--) {
        cout << l << " " << l+1 << endl;
        l+=2;
    }
    return 0;
}