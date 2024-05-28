#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v) {
        cin >> x;
    }
    for(auto val: v) {
        cout << val << " ";
    }
    return 0;
}