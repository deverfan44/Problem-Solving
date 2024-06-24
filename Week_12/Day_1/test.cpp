#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {1,2,5,3,4,5,3,9,7,4,5};
    for(auto x: v) {
        cout << x << " ";
    }
    cout << endl;

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(auto x: v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}