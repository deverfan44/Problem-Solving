#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin >> s1 >> s2;

    if(s1.length()!=s2.length()) cout << "NO" << '\n';
    else {
        bool flag = true;
        for(int i=0; i<s1.length(); i++) {
            if((s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u') && (s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o' ||s2[i]=='u')) {
                flag = true;
            }
            else {
                if((s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u') && (s2[i]!='a' && s2[i]!='e' &&s2[i]!='i' && s2[i]!='o' && s2[i]!='u')) {
                    flag = true;
                }
                else {
                    flag = false;
                    break;
                }
            }

            
        }

        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }
    return 0;
}