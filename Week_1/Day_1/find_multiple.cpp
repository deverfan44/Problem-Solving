#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int flag = 0;
    int mul;
    for(int i=1; i<=1000; i++)
    {
        mul=i*c;
        if(mul >= a && mul <= b)
        {
            // cout << mul << endl;
            flag = 1;
            break;
        }
    }
    if(flag==1) cout << mul << endl;
    else cout << "-1" << endl;
    return 0;
}