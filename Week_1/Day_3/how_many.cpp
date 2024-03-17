#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;

    for (int a=0; a<=s; a++)
    {
        for (int b=0; b<=s; b++)
        {
            for (int c=0; c<=s; c++)
            {
                if ((a+b+c) <= s && (a*b*c) <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}