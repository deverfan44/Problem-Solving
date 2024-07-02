#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int idx1,idx2;
    int mn = INT_MAX;
    for(int i=0; i<n-1; i++) {
        if((v[i+1]-v[i]) < mn) {
            mn = v[i+1]-v[i];
            idx1 = i;
            idx2 = i+1;
        }
    }
    if(n==2) {
        for(int i=0; i<n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int i=idx2; i<n; i++) {
            cout << v[i] << " ";
        }
        for(int i=0; i<=idx1; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
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