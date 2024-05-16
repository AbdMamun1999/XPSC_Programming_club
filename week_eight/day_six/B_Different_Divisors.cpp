#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> prime(10000000, true);
    for (ll i = 2; i * i <= 10000000; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= 10000000; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<ll> all_primes;
    for (int i = 2; i < prime.size(); i++)
    {
        if (prime[i])
            all_primes.push_back(i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll d;
        cin >> d;
        ll value1, value2;
        bool flag1 = true, flag2 = true;
        for (ll val : all_primes)
        {
            if (val - 1 >= d && flag1)
            {
                value1 = val;
                flag1 = false;
            }
            if (val - value1 >= d && val != value1 && flag2)
            {
                value2 = val;
                flag2 = false;
                break;
            }
        }
        cout << value1 * value2 << '\n';
    }

    return 0;
}