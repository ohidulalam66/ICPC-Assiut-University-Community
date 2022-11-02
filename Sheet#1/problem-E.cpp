// E. Area of a Circle

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r;
    cin >> r;
    double pi = 3.141592653;

    cout << fixed << setprecision(9) << (r * r * pi) << "\n";

    return 0;
}