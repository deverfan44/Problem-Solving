#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    multiset<int> price = {3,5,5,6,7};

    auto it = price.upper_bound(4);
    
    cout << *(--it) << endl;
    return 0;
}