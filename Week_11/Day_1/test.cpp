#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<int> d;
    d.push_back(v[0]);
    for(int i=1; i<n; i++) {
        d.push_back(v[i]-v[i-1]);
    }

    for(auto x: d) {
        cout << x << " ";
    }
    return 0;
}