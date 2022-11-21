//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    char x;
    cin >> a >> x >> b;

    if (x == '>')
    {
        if (a > b)
            cout << "Right"
                 << "\n";
        else
            cout << "Wrong"
                 << "\n";
    }
    else if (x == '<')
    {
        if (a < b)
            cout << "Right"
                 << "\n";
        else
            cout << "Wrong"
                 << "\n";
    }
    else if (x == '=')
    {
        if (a == b)
            cout << "Right"
                 << "\n";
        else
            cout << "Wrong"
                 << "\n";
    }

    return 0;
}