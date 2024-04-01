#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        char k1,k2;
        int idx1,idx2;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='S' || s1[i]=='M' || s1[i]=='L')
            {
                k1=s1[i];
                idx1=i;
                break;
            }
        }
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i]=='S' || s2[i]=='M' || s2[i]=='L')
            {
                k2=s2[i];
                idx2=i;
                break;
            }
        }
        if(k1==k2)
        {
            if(k1=='S')
            {
                if(idx1>idx2) cout << '<' << endl;
                else if(idx1<idx2) cout << '>' << endl;
                else cout << '=' << endl;
            }
            if(k1=='L')
            {
                if(idx1>idx2) cout << '>' << endl;
                else if(idx1<idx2) cout << '<' << endl;
                else cout << '=' << endl;
            }
            if(k1=='M') cout << '=' << endl;
        }
        else
        {
            if(k1>k2) cout << '<' << endl;
            else cout << '>' << endl;
            // Because Ascii of
            // S=83 & M=77 & L=73
        }
    }
    return 0;
}