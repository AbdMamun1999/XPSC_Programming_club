/*https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1*/
#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int k, vector<int> &ar, int n)
{

    int l = 0, r = 0;
    long sum = 0;
    long mx = 0;
    while (r < n)
    {

        if (r - l + 1 == k)
        {
            sum = sum + ar[r];
            mx = max(mx, sum);
            sum = sum - ar[l];
            l++;
            r++;
        }
        else
        {
            sum = sum + ar[r];
            r++;
        }
    }

    return mx;
}

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> ar;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }

    cout << maximumSumSubarray(k, ar, n) << endl;

    return 0;
}
