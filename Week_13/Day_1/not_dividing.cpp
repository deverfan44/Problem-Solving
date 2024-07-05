#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    for(int i=0; i<n; i++) {
        if(v[i]==1) v[i]++;
    }
    for(int i=0; i<n-1; i++) {
        if(v[i+1]%v[i]==0) {
            v[i+1]++;
        }
    }
    for(auto x: v) {
        cout << x << " "; 
    }
    cout << endl;
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