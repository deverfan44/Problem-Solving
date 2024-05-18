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
        vector<ll> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        ll gcd1=0,gcd2=0;
        for(int i=0; i<n; i++) {
            if(i%2 == 0) {
                gcd1 = __gcd(gcd1,v[i]);
            }
            else
            {
                gcd2 = __gcd(gcd2,v[i]);
            }
        }
        bool check1=false,check2=false;
        for(int i=1; i<n; i+=2) {
            if(v[i]%gcd1 == 0) {
                check1 = true;
                break;
            }
        }
        for(int i=0; i<n; i+=2) {
            if(v[i]%gcd2 == 0) {
                check2 = true;
                break;
            }
        }

        if(check1 && check2) cout << 0 << endl;
        else if(check1==false) cout << gcd1 << endl;
        else cout << gcd2 << endl;
    }
    return 0;
}
