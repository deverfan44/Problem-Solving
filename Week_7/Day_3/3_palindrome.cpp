#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<char> v = {'a','a','b','b'};
    
    int tmp=0;
    for(int i=0; i<n; i++) {
        cout << v[tmp];
        tmp++;
        if(tmp==4) tmp=0;
    }
    return 0;
}