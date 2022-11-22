//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, X, count = 0;
    cin >> X;

    for (i = 1; i <= X / 2; i++)
    {
        if (X % i == 0)
            count++;
    }
    if (count == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}