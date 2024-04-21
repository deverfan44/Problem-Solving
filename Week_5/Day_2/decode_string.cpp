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
        string v;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]!='0')
            {
                    int x = int(s[i])-48;
                    char ch = (x-1)+'a';
                    v.push_back(ch);
            }
            else
            {
                    int x = int(s[i-1])-48;
                    int y = int(s[i-2])-48;
                    string ch1 = to_string(x);
                    string ch2 = to_string(y);
                    ch2+=ch1;
                    int z = stoi(ch2);
                    char ans = (z-1)+'a';
                    v.push_back(ans);
                    i-=2;
            }
        }

        reverse(v.begin(),v.end());
        cout << v << endl;
    }
    return 0;
}