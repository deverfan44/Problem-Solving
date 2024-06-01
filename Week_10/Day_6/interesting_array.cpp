#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    bool check = true;
    for(int i=1; i<n;i++) {
        ll val1 = max(v[i],v[i-1]);
        ll val2 = min(v[i],v[i-1]);
        if(val1-val2 >=2) {
            cout << "YES" << '\n';
            cout << i << " " << i+1 << '\n';
            check = false;
            break;
        }
        
    }
    if(check) cout << "NO" << endl;
    
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