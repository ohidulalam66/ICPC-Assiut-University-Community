// R. Sequence of Numbers and Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i;
    long long sum = 0;
    cin >> n >> m;

    if ((n <= 0) || m <= 0)
        return 0;
    else
    {
        if (n > m)
            swap(n, m);
        for (i = n; i <= m; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n"
             << "\n";
    }
}