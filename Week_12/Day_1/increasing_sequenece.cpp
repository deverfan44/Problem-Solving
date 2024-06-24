#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    ll ans;
    if(v[0]!=1) ans = 1;
    else ans = v[0]+1;

    for(int i=1; i<n; i++) {
        int x = ans+1;
        if(x!=v[i]) {
            ans++;
        }
        else ans = v[i]+1;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solveIt();
    }
    return 0;
}