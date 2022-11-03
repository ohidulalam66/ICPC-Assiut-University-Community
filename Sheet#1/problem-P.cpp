// P. First digit !

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    short s = x / 1000;

    if (s % 2 == 0)
        cout << "EVEN"
             << "\n";
    else
        cout << "ODD"
             << "\n";

    return 0;
}