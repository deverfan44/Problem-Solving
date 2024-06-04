#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin >> v[i];
    }
    vector<int> d(n+1);
    d[1]=v[1];
    for(int i=2; i<=n; i++) {
        d[i] = (v[i]-v[i-1]);
    }

    for(int i=1; i<=n; i++) cout << d[i] << '\n';
    return 0;
}