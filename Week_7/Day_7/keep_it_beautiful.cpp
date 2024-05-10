#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll q, x, flag = 0;
        cin>>q;

        ll first, last;
        cin >> first;
        last = first;
        cout << 1;

        for(int i=1; i<q; i++) {
            cin >> x;
            if(flag) {
                if(x >= last && x <= first) {
                    last = x;
                    cout << 1;
                }
                else {
                    cout << 0;
                }
            }
            else {
                if(x >= last) {
                    last = x;
                    cout << 1;
                }
                else if(first >= x) {
                    last = x;
                    flag = 1;
                    cout << 1;
                }
                else {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }

    return 0;
}