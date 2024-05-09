#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int zero=0, one=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='0') zero++;
            else one++;
        }
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='0') {
                if(one > 0) one--;
                else break;
            }
            else {
                if(zero > 0) zero--;
                else break;
            }
        }
        int result = one+zero;
        cout << result << endl;
    }
    return 0;
}