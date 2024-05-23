#include <bits/stdc++.h>
using namespace std;

vector<int> divisors;
void divisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
                divisors.push_back(n / i);
        }
    }
}

int gcd(int a, int b)
{
    return __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l <= 3 && r <= 3)
        {
            cout << -1 << '\n';
        }
        else if (l == r)
        {
            if (l % 2 == 0)
            {
                int a = l / 2;
                cout << a << " " << a << '\n';
            }
            else
            {
                divisor(l);
                sort(divisors.begin(), divisors.end());
                int a, b;
                bool flag = false;
                for (auto val : divisors)
                {
                    int x = gcd(val, l - val);
                    if (x > 1)
                    {
                        a = val;
                        b = l - val;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    cout << a << " " << b << '\n';
                else
                    cout << -1 << '\n';
            }
        }
        else
        {
            int a = r / 2;
            cout << a << " " << a << '\n';
        }
    }

    return 0;
}