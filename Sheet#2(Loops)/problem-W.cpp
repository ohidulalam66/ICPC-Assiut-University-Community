// W. Shape3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n; i > 0; i--)
    {
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}