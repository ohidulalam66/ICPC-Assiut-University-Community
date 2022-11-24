// M. Lucky Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, i, c = 0;
    cin >> a >> b;

    for (i = a; i <= b; i++)
    {
        int lucky = 0, x = i;

        while (x)
        {
            if (x % 10 != 4 && x % 10 != 7)
                lucky++;

            x = x / 10;
        }
        if (lucky == 0)
        {
            c++;
            cout << i << " ";
        }
    }
    if (c == 0)
        cout << -1 << "\n";
    return 0;
}