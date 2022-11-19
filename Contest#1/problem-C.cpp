// C. Next Alphabet

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // (a-z) = 97-122

    char c;
    cin >> c;

    int ascNum = c;
    if (ascNum == 122)
    {
        cout << 'a' << "\n";
        return 0;
    }
    int newAscNum = ++c;
    char afterAscChar = newAscNum;

    cout << afterAscChar << "\n";

    return 0;
}