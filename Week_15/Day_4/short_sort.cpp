#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    string str;
    cin >> str;
    if(str[0]=='a') cout << "YES" << endl;
    else if(str[1]=='b') cout << "YES" << endl;
    else if(str[2]=='c') cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solveIt();
    }
    return 0;
}