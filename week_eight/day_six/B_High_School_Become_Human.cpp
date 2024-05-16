#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    if (a == 1 || b == 1)
    {
        if (a == 1 && b == 1)
            cout << '=' << '\n';
        else if (a == 1)
        {
            cout << '<' << '\n';
        }
        else
        {
            cout << '>' << '\n';
        }
    }
    else if (a == 2 || b == 2)
    {
        if (a == 2 && b == 3)
        {
            cout << '<' << '\n';
        }
        else if (a == 3 && b == 2)
            cout << '>' << '\n';
        else if ((a == 2 && b == 4) || (a == 4 && b == 2))
            cout << '=' << '\n';
        else if (a == b)
            cout << '=' << '\n';
        else if (a == 2)
        {
            cout << '>' << '\n';
        }
        else
            cout << '<' << '\n';
    }
    else if (a == 3 || b == 3)
    {
        if (a == b)
            cout << '=' << '\n';
        else if (a == 3)
            cout << '>' << '\n';
        else
            cout << '<' << '\n';
    }
    else if (a < b)
        cout << '>' << '\n';
    else if (a > b)
        cout << '<' << '\n';
    else
        cout << '=' << '\n';

    return 0;
}