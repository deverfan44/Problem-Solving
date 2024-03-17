#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
    }

    if(sum%2==0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                sum = sum-v[i];
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}