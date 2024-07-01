#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        // v[i].first = x;
        // v[i].second = y;
        v[i]={x,y};
    }
    
    bool flag = true;
    for(int i=1; i<n; i++) {
        if(v[i].first>=v[0].first) {
            if(v[i].second>=v[0].second) {
                flag = false;
                break;
            }
        }
    }

    if(flag) cout << v[0].first << endl;
    else cout << -1 << endl;
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