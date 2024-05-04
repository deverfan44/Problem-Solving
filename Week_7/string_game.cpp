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
        string str;
        cin >> str;
        int cnt=1;
        int i=0,j=1;
        while(j<n) {
            if(str[i]!=str[j]) {
                cnt++;
            }
            i+=2;
            j+=2;
        }

        if(cnt%2 != 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl; 

    }
    return 0;
}