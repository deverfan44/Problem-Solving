#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int k;
    cin >> s;
    cin >> k;
    for(int i=0; i<s.length(); i++)
    {
        cin >> s[i];
    }
    unordered_map<char,int> mp;
    int l=0,r=0;
    int mx = INT_MIN;
    while (r<s.length())
    {
        mp[s[r]]++;
        if(mp.size() < k)
        {
            r++;
        }
        else if(mp.size()==k)
        {
            mx=max(mx,r-l+1);
            r++;
        }
        else if(mp.size() > k)
        {
            while(mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            r++;
        }
    }
    
    if(mx==INT_MIN) cout << "-1" << '\n';
    else cout << mx << '\n';
    
    return 0;
}