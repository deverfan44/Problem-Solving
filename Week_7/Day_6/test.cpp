#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Erfan";
    cout << s << endl;

    s.erase(s.begin()+2);
    cout << s << endl;

    vector<int> v(0);
    v.push_back(1);
    v.push_back(3);
    cout << v.size() << endl;
    return 0;
}