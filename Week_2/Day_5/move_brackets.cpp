#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int open=0,move=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                if(open==0) move++;
                else open--;
            }
        }
        cout << move << '\n';
    }
    return 0;
}