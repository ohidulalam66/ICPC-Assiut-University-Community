// S. Sum of Consecutive Odd Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, i, sum = 0;
        cin >> a >> b;
        if (a > b)
            swap(a, b);

        for (i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}