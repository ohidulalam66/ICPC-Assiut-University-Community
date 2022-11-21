// B. Even Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i;
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        if (N == 1)
        {
            cout << -1 << "\n";
        }

        else if (i % 2 == 0)
            cout << i << "\n";
    }

    return 0;
}