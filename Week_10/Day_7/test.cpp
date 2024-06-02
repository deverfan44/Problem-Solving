#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    multiset<int> st = {10,20,30,40,10,10};
    for(auto x: st) {
        cout << x << " ";
    }
    cout << endl;

    st.erase(st.find(10));
    st.erase(st.find(10));
    for(auto x: st) {
        cout << x << " ";
    }
    return 0;
}