#include <bits/stdc++.h>
using namespace std;

int main() {
        string txt,pat;
        cin >> txt >> pat;
        vector<int>fr1(26,0);
        vector<int>fr2(26,0);
        for(char c: pat)
        {
            fr1[c-'a']++;
        }
        int txtSz=txt.size(),patSz=pat.size();
        int ans=0;
        int r=0,l=0;
        while(r<txtSz)
        {
            fr2[txt[r]-'a']++;
            if(r-l+1==patSz)
            {
                if(fr1==fr2)
                {
                    ans++;
                }
                fr2[txt[l]-'a']-=1;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        cout << ans << endl;
    return 0;
}