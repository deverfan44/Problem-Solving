#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Hint form youtube
void solveIt() {
    ll x;
    cin >> x;

    ll i=0;
    vector<ll> v;
    v.push_back(x);

    while((1<<i)<x) {
        if(x&(1<<i)) {
            x = x^(1<<i);
            v.push_back(x);
        }
        i++;
    }
    while(x>1) {
        v.push_back(x/2);
        x = x/2;
    }

    cout << v.size() << '\n';
    for(auto x: v) {
        cout << x << " ";
    }
    cout << '\n';

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