// L. GCD (greatest common divisor)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, rem = 0, gcd = 0;
    cin >> n1 >> n2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    cout << gcd << "\n";

    return 0;
}