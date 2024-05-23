#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll x,y;
        cin >> x >> y;
        ll tmp,val,ans;
        if(y>x) {
            if(y%2 == 0) {
                tmp = y-1;
                val = (tmp*tmp)+1;
                ans = val+x-1;
            }
            else {
                ans = (y*y)-x+1;
            }
        }
        else {
            if(x%2 == 0) {
                ans = (x*x)-y+1;
            }
            else {
                tmp = x-1;
                val = (tmp*tmp)+1;
                ans = val+y-1;
            }
        }
        
                cout << ans << endl;
    }
    return 0;
}