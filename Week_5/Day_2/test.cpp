#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int x = int('5')-48;
        int y = int('1')-48;
        string ch1 = to_string(x);
        string ch2 = to_string(y);
        ch2+=ch1;
        int z = stoi(ch2);
        cout << z << endl;
    return 0;
}