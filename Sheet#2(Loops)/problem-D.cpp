// D. Fixed Password

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int password;

    while (1)
    {
        cin >> password;
        if (password == 1999)
        {
            cout << "Correct"
                 << "\n";
            break;
        }
        else
            cout << "Wrong"
                 << "\n";
    }

    return 0;
}