// W. Mathematical Expression

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;

    if (x == '+')
    {
        if (a + b == c)
            cout << "Yes"
                 << "\n";
        else
            cout << a + b
                 << "\n";
    }
    else if (x == '-')
    {
        if (a - b == c)
            cout << "Yes"
                 << "\n";
        else
            cout << a - b
                 << "\n";
    }
    else if (x == '*')
    {
        if (a * b == c)
            cout << "Yes"
                 << "\n";
        else
            cout << a * b
                 << "\n";
    }

    return 0;
}