#include <bits/stdc++.h>
#define ll long long
using namespace std;
// need hints
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string str1,str2;
        cin >> str1 >> str2;

        int n = str1.length();
        bool check = false;

        if(str1==str2) {
            cout << "YES" << endl;
        }
        else if(str1[n-2]=='0' && str2[n-2]=='0') {
            cout << "YES" << endl;
        }
        else if(str1[1]=='1' && str2[1]=='1') {
            cout << "YES" << endl;
        }
        else {
            for(int i=0; i<n; i++) {
                if(str1[i]=='0' && str2[i]=='0' && str1[i+1]=='1' && str2[i+1]=='1') {
                    check = true;
                    break;
                }
            }
            
            check?cout << "YES" << endl: cout << "NO" << endl;
        }

    }
    return 0;
}