#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> v(n+1);
        for(int i=1; i<=n; i++) {
            cin >> v[i];
        }

        bool check = true;
        for(int i=1; i<=n; i++) {
            int flag = 0;
            for(int j=2; j<=(i+1); j++) {
                if(v[i]%j != 0) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                check = false;
                break;
            }
        }

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}