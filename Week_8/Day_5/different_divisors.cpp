#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            v.push_back(i);
            int x=n/i;
            if(x!=i) {
                v.push_back(x);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}