#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN = (1<<15);

vector<int> palindromes;
void make_palindrome()
{
    for(int i=0; i<maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool check = true;
        for(int j=0; j<(len/2); j++)
        {
            if(s[j]!=s[len-j-1])
            {
                check = false;
                break;
            }
        }
        if(check) palindromes.push_back(i);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    make_palindrome();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(maxN),v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            v.push_back(x);
        }
        long long ans = n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<palindromes.size(); j++)
            {
                int curr = (v[i]^palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << ans/2 << '\n';
    }
    return 0;
}