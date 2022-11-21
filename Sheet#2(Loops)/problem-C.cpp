// C. Even, Odd, Positive and Negative

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> N;
    int num[N];

    for (i = 0; i < N; i++)
    {
        cin >> num[i];

        if (num[i] % 2 == 0)
            even++;
        else
            odd++;

        if (num[i] > 0)
            positive++;
        else if (num[i] < 0)
            negative++;
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";

    return 0;
}