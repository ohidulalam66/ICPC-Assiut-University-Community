// K. Divisors

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, N, divisors = 0;
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
            cout << i << "\n";
    }

    return 0;
}