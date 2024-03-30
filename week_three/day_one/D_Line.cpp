#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            sum += i;
        }
        else if (s[i] == 'R')
        {
            sum += n - i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {
            if (s[i] == 'L')
            {
                sum += n - i;
            }
            else if (s[i] == 'R')
            {
                sum += n - i;
            }
        }
        else
        {
            if (s[i] == 'L')
            {
                sum += i;
            }
            else if (s[i] == 'R')
            {
                sum += i;
            }
        }
        cout << sum << " ";
    }

    return 0;
}