#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string name1 = "ERFAN";
    cout << name1 << endl;
    transform(name1.begin(),name1.end(),name1.begin(), ::tolower);
    cout << name1 << endl;

    cout << endl;
    string name2 = "erfan";
    cout << name2 << endl;
    transform(name2.begin(),name2.end(),name2.begin(), ::toupper);
    cout << name2 << endl;

    cout << endl;
    string s = "GoRziLLa";
    cout << s << endl;
    
    // uppercase to lowercase and lowercase to uppercase
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]<=90)
        {
            s[i]+=32;
        }
        else
        {
            s[i]-=32;
        }
    }
    cout << s << endl;
    return 0;
}