// Y. The last 2 digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    long long multiplication = a * b * c * d;
    int x = multiplication % 100;

    if (x < 10)
        cout << 0 << x;
    else
        cout << x;

    return 0;
}