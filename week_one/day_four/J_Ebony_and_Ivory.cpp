/*
https://codeforces.com/problemset/problem/633/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if ((i * a) + (j * b) == c)
            {
                flag = true;
            }
        }
    }

    if (flag)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";

    return 0;
}