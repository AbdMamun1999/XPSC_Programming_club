/*https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..*/
#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt)
{

    int k = pat.size();
    int n = txt.size();

    int cnt1[26] = {0};
    for (int i = 0; i < k; i++)
    {
        int x = pat[i] - 'a';
        cnt1[x]++;
    }

    int cnt2[26] = {0};
    int res = 0;
    int r = 0, l = 0;
    while (r < n)
    {
        int x = txt[r] - 'a';
        cnt2[x]++;
        if (r - l + 1 == k)
        {
            bool flag = true;
            for (int i = 0; i < 26; i++)
            {
                if (cnt1[i] != cnt2[i])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                res++;
            int y = txt[l] - 'a';
            cnt2[y]--;
            l++;
            r++;
        }
        else
            r++;
    }

    return res;
}

int main()
{

    string pat, txt;
    cin >> txt >> pat;
    auto ans = search(pat, txt);
    cout << ans << "\n";

    return 0;
}