#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n%2 == 0) {
        int x=(n/2);
        cout << x << '\n';
        for(int i=1; i<=x; i++) {
            cout << 2 << " ";
        }
    }
    else {
        int x=(n/2);
        cout << x << '\n';
        for(int i=1; i<x; i++) {
            cout << 2 << " ";
        }
        cout << 3;
    }
    return 0;
}