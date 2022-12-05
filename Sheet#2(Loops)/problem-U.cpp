// U. Some Sums

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        long long sum_d = 0;
        while (x)
        {
            sum_d += x % 10;
            x = x / 10;
        }
        if (sum_d >= a && sum_d <= b)
            sum += i;
    }

    cout << sum << "\n";

    return 0;
}