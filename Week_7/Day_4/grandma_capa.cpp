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
        string s;
        cin >> s;
        int result = INT_MAX;
        
        for(int i=0; i<26; i++) {
            int l=0, r=n-1, cnt=0;
            while(l <= r) {
                if(s[l] == s[r]) {
                    l++;
                    r--;
                }
                else if(s[l] == char('a'+i)) {
                    cnt++;
                    l++;
                }
                else if(s[r] == char('a'+i)) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = -1;
                    break;
                }
            }
            if(cnt != -1) {
                result = min(result,cnt);
            }
        }

        if(result == INT_MAX) cout << -1 << endl;
        else cout << result << '\n';
    }
    return 0;
}