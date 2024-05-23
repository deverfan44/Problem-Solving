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
        bool flag = false;
        if(a<b) swap(a,b);
        
        if((a+b)%3 == 0) {
            if(a <= (b*2)) {
                flag = true;
            }
        }
        (flag==true)? cout << "YES" << endl: cout << "NO" << endl;
    }
    return 0;
}