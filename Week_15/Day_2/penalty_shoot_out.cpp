#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int x,y;
    cin >> x >> y;
    bool check = false;
    if(x>y) {
        int tmp = x-y;
        if(tmp<=1) check = true;
    }
    else if(x<y) {
        int tmp = y-x;
        if(tmp<=2) check = true;
    }
    else check = true;

    if(check) cout << "YES" << '\n';
    else cout << "NO"<< '\n';
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