// J. Primes from 1 to n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, N;
    cin >> N;

    for (i = 2; i <= N; i++) // 2 3 4 5 6 7 8 9 10
    {
        int prime = 0;
        for (j = 2; j < i; j++) // 2 3 5 7
        {
            if (i % j == 0)
            {
                prime++;
                break;
            }
        }
        if (prime == 0)
            cout << i << " ";
    }

    return 0;
}