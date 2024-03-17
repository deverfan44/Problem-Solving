#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    for (int i = 0; i <= c / b; i++)
    {
        if ((c - (b * i)) % a == 0)
            flag = 1;
    }
 
    if(flag==1) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}