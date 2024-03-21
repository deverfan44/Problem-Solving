#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        char cr;
        cin >> n >> cr;
        cin >> s;
 
        set<int> green;
        for (int i=0; i < n ; i++) 
        {
            if (s[i] == 'g') {
                green.insert(i + 1);
            }
        }
 
        int ans = INT_MIN;
        for (int i=0; i < n ; i++) 
        {
            if (s[i] == cr) {
                auto LB = green.lower_bound(i + 1);
                if (LB != green.end()) 
                {
                    int diff = (*LB - (i + 1));
                    ans = max(ans, diff);
                }
                else 
                {
                    int x = n - (i + 1);
                    int y = *green.begin();
                    ans = max(ans, x + y);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}