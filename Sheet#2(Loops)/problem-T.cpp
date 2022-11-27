// T. Shape2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, k;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k < (i * 2); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}