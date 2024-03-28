#include <bits/stdc++.h>
#define ll long long
using namespace std;

int longestKSubstr(string s, int k)
{
    ll n = s.size();

    map<char, ll> mp;
    ll r = 0, l = 0, ans = 0;
    while (r < n)
    {
        mp[s[r]]++;
        if (mp.size() <= k)
        {
            ans = max(ans, r - l + 1);
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k && l < r)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }

            if (mp.size() <= k)
            {
                ans = max(ans, r - l + 1);
            }
        }
        r++;
    }
    if (mp.size() == k)
        return ans;
    else
        return -1;
}

int main()
{

    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << endl;
    cout << longestKSubstr(s, k) << endl;
}