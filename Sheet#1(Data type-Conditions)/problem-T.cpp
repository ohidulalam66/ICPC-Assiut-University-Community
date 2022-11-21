// T. Sort Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    if (A >= B && A >= C)
    {
        if (B >= C)
        {
            cout << C << "\n"
                 << B << "\n"
                 << A << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
        else
        {
            cout << B << "\n"
                 << C << "\n"
                 << A << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
    }
    else if (B >= A && B >= C)
    {
        if (A >= C)
        {
            cout << C << "\n"
                 << A << "\n"
                 << B << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
        else
        {
            cout << A << "\n"
                 << C << "\n"
                 << B << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
    }
    else if (C >= A && C >= B)
    {
        if (B >= A)
        {
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
        else
        {
            cout << B << "\n"
                 << A << "\n"
                 << C << "\n";
            cout << "\n";
            cout << A << "\n"
                 << B << "\n"
                 << C << "\n";
        }
    }

    return 0;
}