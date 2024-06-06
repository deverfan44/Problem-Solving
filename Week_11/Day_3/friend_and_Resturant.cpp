#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    if(a.first>b.first) {
        return true;
    }
    else if(a.first==b.first) {
        return a.second > b.second;
    } 
    else {
        return false;
    }
}
bool check(pair<ll,ll> a, pair<ll,ll> b) {
    return a.first>b.first;
}
void solveIt() {
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    vector<pair<ll,ll>> diff(n);
    for(int i=0; i<n; i++) {
        diff[i].first=b[i]-a[i];
        diff[i].second = i;
    }
    sort(diff.begin(),diff.end(),check);

    vector<pair<ll,ll>> pr(n);
    for(int i=0; i<n; i++) {
        pr[i].first = b[diff[i].second];
        pr[i].second = a[diff[i].second];
    }

    ll l=0, r=n-1, cnt=0;
    while(l<r) {
        if((pr[l].first+pr[r].first) >= (pr[l].second+pr[r].second)) {
            cnt++;
            l++;
            r--;
        }
        else {
            r--;
        }
    }
    cout << cnt << endl;
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