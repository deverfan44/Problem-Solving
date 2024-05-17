#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        ll x,y,z;
        if(b==1) {
            cout << "NO" << '\n';
        }
        else if(b==2) {
            cout << "YES" << '\n';
            if(a==1) {
                
                cout << 3 << " " << 1 << " " << 4 << endl;
            }
            else {
                b*=a;
                z=a*b;
                b--;
                x=a*b;
                y=a;
                
                cout << x << " " << y << " "<< z << endl;
            }
        }
        else {
            cout << "YES" << '\n';
            z=a*b;
            b--;
            x=a*b;
            y=a;

            cout << x << " " << y << " "<< z << endl;
        }
    }
    return 0;
}