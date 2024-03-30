#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1="erfan";
    string s2="tanim";
    string sum = s1+s2;
    cout << sum.size() << endl << s1.length() << endl << s2.length();
    cout<< endl;

    cout << endl;
    string name = "gorzilla";
    string nm1 = name.substr(0,2);
    string nm2 = name.substr(2,name.size()-1);
    cout << name << endl << nm1 << endl << nm2;
    return 0;
}