// Q. Digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    cin >> count;

    while (count--)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0 << " ";
        else
        {
            while (n)
            {
                cout << n % 10 << " ";
                n = n / 10;
            }
        }
        cout << "\n";
    }

    return 0;
}