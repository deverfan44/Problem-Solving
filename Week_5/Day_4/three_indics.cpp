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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        vector<int> idx;
        int flag=0;

        for(int i=1; i<n-1; i++)
        {
            idx.push_back(i+1);
            for(int j=i-1; j>=0; j--)
            {
                if(v[i]>v[j])
                {
                    idx.push_back(j+1);
                    break;
                }
            }

            if(idx.size()!=0)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(v[i]>v[j])
                    {
                        idx.push_back(j+1);
                        break;
                    }
                }
            }
            if(idx.size()>=3)
            {
                flag=1;
                break;
            }
            
            idx.clear();
        }

        if(flag)
        {
            cout << "YES" << endl;
            sort(idx.begin(),idx.end());
            for(int i=0; i<idx.size(); i++)
            {
                cout << idx[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}