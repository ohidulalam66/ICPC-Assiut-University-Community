// D. Difference

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long A, C;
    int B, D;
    cin >> A >> B >> C >> D;

    long long X = (A * B) - (C * D);
    cout << "Difference = " << X << "\n";

    return 0;
}