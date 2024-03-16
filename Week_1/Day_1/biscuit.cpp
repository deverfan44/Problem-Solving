#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int bisc = 0, k=2;
    int i = a;
    while(i<c+0.5)
    {
        bisc+=b;
        i=a*k;
        k++;
    }
    cout << bisc << endl;
    return 0;
}