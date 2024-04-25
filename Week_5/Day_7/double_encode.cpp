#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        int l=0;
        int mx = INT_MIN;
        int cnt;
        while(l<a.length())
        {
            for(int i=0; i<b.length(); i++)
            {
                cnt=0;
                if(a[l]==b[i])
                {
                    int k=i;
                    int t=l;
                    while(t<a.length() && k<b.length() && (a[t]==b[k]))
                    {
                        cnt++;
                        k++;
                        t++;
                    }
                }
                mx = max(mx,cnt);
            }
            l++;
        }

        int totalLen = a.length()+b.length();
        int totalSame = mx*2;
        cout << totalLen-totalSame << "\n";
    }
    return 0;
}