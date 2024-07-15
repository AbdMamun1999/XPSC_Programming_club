#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
   int t;
   cin >> t;
   while (t--)
   {
    string s;
        cin >> s;


        int cnt1 = 0,cnt0 = 0;
        for (auto ch : s)
        {
        if(ch=='1') cnt1++;
        else cnt0++;
        }

        int x = min(cnt0,cnt1);
        if(x%2==0) cout << "NET" << '\n';
        else cout << "DA" << '\n';
   }
   
   
   

    return 0;
}