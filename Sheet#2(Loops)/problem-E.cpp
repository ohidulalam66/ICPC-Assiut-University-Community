// E. Max

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, max = 0;
    cin >> N;

    int num[N];
    for (i = 0; i < N; i++)
    {
        cin >> num[i];
        if (num[i] > max)
            max = num[i];
    }

    cout << max << "\n";

    return 0;
}