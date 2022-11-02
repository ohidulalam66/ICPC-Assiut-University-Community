// M. Capital or Small or Digit

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char x;
    cin >> x;

    if (x >= '0' && x <= '9')
        cout << "IS DIGIT"
             << "\n";
    else
    {
        cout << "ALPHA"
             << "\n";
        if (x >= 'A' && x <= 'Z')
            cout << "IS CAPITAL"
                 << "\n";
        else
            cout << "IS SMALL"
                 << "\n";
    }

    return 0;
}