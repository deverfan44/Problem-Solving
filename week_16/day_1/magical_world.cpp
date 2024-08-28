#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int a, b, x;
    cin >> a >> b >> x;

    int ans1 = a*b;
    int ans2 = x*x;
    if(ans2>=ans1) {
        cout << 0 << endl;
    }
    else {
        if(a>b) {
            a = 1;
        }
        else b = 1;
        if(a*b <= ans2) {
            cout << 1 << endl;
        }
        else cout << 2 << endl;
    }
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