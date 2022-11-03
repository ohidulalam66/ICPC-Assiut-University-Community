// R. Age in Days

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    cout << (n / 365) << " years"
         << "\n";
    n = (n % 365);
    cout << (n / 30) << " months"
         << "\n";
    n = (n % 30);
    cout << n << " days"
         << "\n";

    return 0;
}