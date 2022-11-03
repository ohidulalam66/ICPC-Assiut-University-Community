// O. Calculator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    char x;

    cin >> a >> x >> b;

    if (x == '+')
        cout << a + b;
    else if (x == '-')
        cout << a - b;
    else if (x == '*')
        cout << a * b;
    else
        cout << a / b;

    return 0;
}