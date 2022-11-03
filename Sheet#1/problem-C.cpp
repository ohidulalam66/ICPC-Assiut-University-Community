// C. Simple Calculator

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int X;
    long long Y;

    cin >> X >> Y;

    cout << X << " + " << Y << " = " << X + Y << "\n";
    cout << X << " * " << Y << " = " << X * Y << "\n";
    cout << X << " - " << Y << " = " << X - Y << "\n";

    return 0;
}