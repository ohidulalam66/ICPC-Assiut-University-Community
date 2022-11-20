// I. Lucky Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num;
    cin >> num;

    int num1 = num[0] - '0';
    int num2 = num[1] - '0';

    if (num2 == 0)
        cout << "YES"
             << "\n";
    else if ((num1 % num2 == 0) || (num2 % num1 == 0))
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}