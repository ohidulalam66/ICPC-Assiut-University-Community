// H. Data Type Guessing

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y, z;
    cin >> x >> y >> z;

    double res = (x * y) / z;
    long long longRes = res;
    double doubleRes = res - longRes;

    if (doubleRes > 0)
        cout << "double"
             << "\n";
    else if (longRes <= 2147483647)
        cout << "int"
             << "\n";
    else
        cout << "long long"
             << "\n";
    return 0;
}