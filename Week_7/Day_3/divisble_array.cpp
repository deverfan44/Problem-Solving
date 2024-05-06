#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%2 != 0) {
            for(int i=1; i<=n; i++) {
                cout << i << " ";
            }
        }
        else 
        {
            int x=0;
            for(int i=1; i<=n; i++) {
                x+=2;
                cout << x << " "; 
            }
        }

        cout << endl;
    }
    return 0;
}