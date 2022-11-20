// G. Katryoshka

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long eyes, mouth, body, count = 0;
    cin >> eyes >> mouth >> body;

    if ((mouth >= eyes && mouth >= body) || (eyes > mouth && mouth >= body) || (eyes <= mouth && mouth < body))
    {
        count = min(eyes, body);
        cout << count << "\n";
    }
    else if (eyes > mouth && mouth < body)
    {
        count = mouth;
        eyes -= mouth;
        body -= mouth;
        count += min(eyes / 2, body);
        cout << count << "\n";
    }

    return 0;
}