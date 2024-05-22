#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    if(n==3 || n==2) {
        cout << "NO SOLUTION" << endl; 
    }
    else {
        vector<ll> first,second;
        for(int i=1; i<=n; i++) {
            if(i%2 == 0) {
                first.push_back(i);
            }
            else second.push_back(i);
        }
        for(auto x: first) {
            cout << x << " ";
        }
        for(auto x: second) {
            cout << x << " ";
        }
        cout << endl;
    }

    
    return 0;
}