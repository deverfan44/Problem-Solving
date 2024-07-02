#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> v(26);
    for(int i=0; i<n; i++) {
        v[str[i]-'a']++;
    }
    vector<int> tmp = v;
    for(int i=0; i<26; i++) {
        if(k<=v[i]) {
            v[i] = v[i]-k;
            k=0;
        }
        else {
            k = k-v[i];
            v[i]=0;
        }
        if(k==0) break;
    }

    for(int i=0; i<n; i++) {
        if(v[str[i]-'a'] == tmp[str[i]-'a']) {
            cout << str[i];
        }
        else if(v[str[i]-'a'] < tmp[str[i]-'a']) {
            tmp[str[i]-'a']--;
        }
    }
    return 0;
}