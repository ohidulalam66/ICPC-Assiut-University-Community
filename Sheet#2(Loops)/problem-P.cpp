// P. Shape1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}