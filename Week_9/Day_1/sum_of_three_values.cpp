#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<pair<int,int>> tmp;
    for(int i=0; i<n; i++) {
        tmp.push_back({v[i],i+1});
    }
    sort(tmp.begin(),tmp.end());
    // int cnt=0;
    // vector<int> position;
    for(int i=0; i<n-1; i++) {
        int tagt = x-tmp[i].first;
        int l = i+1;
        int r = n-1;
        while(l<r) {
            int tmp_sum = tmp[l].first+tmp[r].first;
            if(tmp_sum == tagt) {
                cout << tmp[i].second << " " << tmp[l].second << " " << tmp[r].second << endl;
                return 0;
            }
            else if(tmp_sum<tagt) {
                l++;
            }
            else r--;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
