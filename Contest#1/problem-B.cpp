// B. Memo and Momo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
        cout << "Both"
             << "\n";
    else if (a % k == 0 && b % k != 0)
        cout << "Memo"
             << "\n";
    else if (a % k != 0 && b % k == 0)
        cout << "Momo"
             << "\n";
    else
        cout << "No One", "\n";

    return 0;
}