#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    vector<int> v(26,0);
    for(int i=0; i<str.length(); i++) {
        v[str[i]-'A']++;
    }
    int oddCnt = 0;
    for(int i=0; i<v.size(); i++) {
        if(v[i]%2 == 1) {
            oddCnt++;
        }
    }

    if(str.length()%2 == 0 && oddCnt>0) {
        cout << "NO SOLUTION" << endl;
    }
    else if(str.length()%2 == 1 && oddCnt>1) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        string s = "";
        string tmp = "";
        for(int i=0; i<26; i++) {
            if(v[i]%2 == 0) {
                int x = v[i]/2;
                for(int j=1; j<=x; j++) {
                    s += char('A'+i);
                }
            }
            else {
                int x = v[i]/2;
                int y = v[i]%2;
                for(int j=1; j<=x; j++) {
                    s += char('A'+i);
                }
                for(int j=1; j<=y; j++) {
                    tmp += char('A'+i);
                }
            }
        }

        cout << s << tmp;
        reverse(s.begin(),s.end());
        cout << s << endl;
    }
    return 0;
}