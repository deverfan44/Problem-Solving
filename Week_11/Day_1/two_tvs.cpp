#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    map<int,int> mp;
    while(n--) {
        int l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum = 0;
    bool check = true;
    for(auto [idx,val]: mp) {
        sum += val;
        if(sum > 2) {
            check = false;
            break;
        }
    }
    
    if(check) cout << "YES" << endl;
    else cout << "No" << endl;
    return 0;
}