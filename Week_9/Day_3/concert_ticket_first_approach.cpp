#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Time limit Exceed code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    vector<ll> price(n),customars(m);
    for(int i=0; i<n; i++) {
        cin >> price[i];
    }
    for(int i=0; i<m; i++) {
        cin >> customars[i];
    }

    vector<ll> ans;
    sort(price.begin(),price.end());
    for(int i=0; i<m; i++) {
        for(int j=0; j<price.size(); j++) {
            if(customars[i]<price[0]) {
                ans.push_back(-1);
                break;
            }
            if(customars[i]==price[j]) {
                ans.push_back(price[j]);
                price.erase(price.begin()+j);
                break;
            }
            else if(customars[i]<price[j]) {
                    ans.push_back(price[j-1]);
                    price.erase(price.begin()+(j-1));
                    break;
                
            }
        }
    }

    for(auto x: ans) {
        cout << x << endl;; 
    }
    return 0; 
}