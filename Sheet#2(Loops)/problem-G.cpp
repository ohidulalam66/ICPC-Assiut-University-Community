// G. Factorial

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
        long long i, fact = 1, N;
        cin >> N;
        for (i = 1; i <= N; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }

    return 0;
}
