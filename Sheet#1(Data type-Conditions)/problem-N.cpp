// N. Char

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char x;
    cin >> x;

    if (x >= 'A' && x <= 'Z')
        cout << (char)(x + 32);
    else
        cout << (char)(x - 32);

    return 0;
}