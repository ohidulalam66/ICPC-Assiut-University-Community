// A. Winter Sale

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double discount, price, pre, priceResult, result;
    cin >> discount >> price;

    pre = 100 - discount;
    priceResult = price / pre;
    result = (discount * priceResult) + price;

    cout << result << "\n";

    return 0;
}