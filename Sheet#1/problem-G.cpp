// G. Summation from 1 to N
/*
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).
∑i=1Ni
 */

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // (n * (n + 1)) / 2
    long long n;
    cin >> n;
    cout << (n * (n + 1)) / 2;

    return 0;
}