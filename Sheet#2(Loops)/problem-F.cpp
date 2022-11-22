// F. Multiplication table

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, multi = 0;
    cin >> N;

    for (i = 1; i <= 12; i++)
    {
        multi = N * i;
        cout << N << " "
             << "*"
             << " "
             << i
             << " "
             << "="
             << " "
             << multi
             << "\n";
    }

    return 0;
}