#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%2 == 0) {
            int x=n/2;
            cout << __gcd(n,x) << endl;
        }
        else {
            int x=(n-1)/2;
            cout << __gcd(n-1,x) << endl;
        }
    }
    
    return 0;
}