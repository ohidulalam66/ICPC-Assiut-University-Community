// F. Digits Summation

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    cout << (n % 10) + (m % 10) << "\n";

    return 0;
}