#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (a != 2 && b == 0)
        {
            cout << 'a';
            a++;
        }
        else if (a == 2 && b != 2)
        {
            cout << 'b';
            b++;
            if (b == 2)
            {
                a = 0;
                b = 0;
            }
        }
    }

    return 0;
}