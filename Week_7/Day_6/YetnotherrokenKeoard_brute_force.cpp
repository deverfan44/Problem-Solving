#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;

        vector<int> b(0),B(0);
        for(int i=0; i<str.length(); i++) {
            if(str[i]=='b' && b.size()!=0) {
                b.pop_back();
            }
            else if(str[i]=='B' && B.size()!=0) {
                B.pop_back();
            }
            else if (int(str[i]) >= 65 && int(str[i]) <= 90 && str[i]!='B') {
                B.push_back(i);
            }
            else if (int(str[i]) >=97 && int(str[i]) <= 122 && str[i]!='b'){
                b.push_back(i);
            }
        }

        vector<int> result;
        for(int i=0; i<b.size(); i++) {
            result.push_back(b[i]);
        }
        for(int i=0; i<B.size(); i++) {
            result.push_back(B[i]);
        }

        sort(result.begin(),result.end());
        for(int i=0; i<result.size(); i++) {
            cout << str[result[i]];
        }
        cout << endl;
    }
    return 0;
}