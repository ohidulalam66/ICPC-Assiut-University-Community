// I. Palindrome

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, N, rev = 0, temp, remainder = 0;
    cin >> N;
    temp = N;

    while (temp != 0)
    {
        remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp = temp / 10;
    }

    if (N == rev)
    {

        cout << rev << "\n"
             << "YES"
             << "\n";
    }
    else
    {
        cout << rev << "\n"
             << "NO"
             << "\n";
    }

    return 0;
}