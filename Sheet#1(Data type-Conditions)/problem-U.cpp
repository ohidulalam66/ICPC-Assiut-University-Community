// U. Float or int

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x;
    cin >> x;

    int y = (int)x;

    if (x - y > 0)
    {
        cout << "float " << y << " " << x - y << "\n";
    }
    else
        cout << "int "
             << y << "\n";

    return 0;
}