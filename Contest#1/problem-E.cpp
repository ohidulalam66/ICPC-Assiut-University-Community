// E. Interval Sweep

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    if ((a == 0 && b == 0) || abs(a - b) >= 2)
        cout
            << "NO"
            << "\n";
    else
        cout << "YES"
             << "\n";
    return 0;
}