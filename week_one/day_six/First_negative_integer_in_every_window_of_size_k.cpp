/*https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1*/
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int ar[],
                                            long long int n, long long int k)
{

    queue<long long int> q1, q2;
    vector<long long> v;

    int l = 0, r = 0;
    while (r < n)
    {
        if (r - l + 1 == k)
        {

            if (ar[r] < 0)
            {
                q1.push(ar[r]);
                q2.push(ar[r]);
            }
            else
            {
                q2.push(ar[r]);
            }

            if (q1.empty())
            {
                v.push_back(0);
                q2.pop();
            }
            else
            {
                if (q1.front() == q2.front())
                {
                    v.push_back(q1.front());
                    q1.pop();
                    q2.pop();
                }
                else
                {
                    v.push_back(q1.front());
                    q2.pop();
                }
            }

            r++;
            l++;
        }
        else
        {
            if (ar[r] < 0)
            {
                q1.push(ar[r]);
                q2.push(ar[r]);
            }
            else
            {
                q2.push(ar[r]);
            }
            r++;
        }
    }

    return v;
}