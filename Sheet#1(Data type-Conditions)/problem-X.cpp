// X. Two intervals

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a <= c && c <= b)
    {
        if (d >= b)
            cout << c << " " << b << "\n";
        else if (b >= d)
            cout << c << " " << d << "\n";
    }
    else if (a >= c && a <= d)
    {
        if (b >= d)
            cout << a << " " << d << "\n";
        else if (d >= b)
            cout << a << " " << b << "\n";
    }

    else
        cout << -1;

    return 0;
}