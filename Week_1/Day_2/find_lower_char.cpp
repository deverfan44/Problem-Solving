#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int frq[26]={0};
    for(int i=0; i<s.length(); i++)
    {
        frq[s[i]-'a']++;
    }
    int flag=0,idx;
    for(int i=0; i<26; i++)
    {
        if(frq[i]==0)
        {
            idx=i;
            flag=1;
            break;
        }
    }
    if(flag==0) cout << "None" << endl;
    else
    {
        cout << char(idx+'a') << endl;
    }
    return 0;
}