#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int Pairs = 0;
        int NotPair = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                Pairs += 2;
            }
            else
            {
                NotPair++;
            }
            l++, r--;
        }
        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= NotPair;

            if (total < 0)
            {
                ans.push_back('0');
                continue;
            }
            total = max((total % 2), total - Pairs);
            total = max(0, total - (n % 2));
            if (total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << endl;
    }
    return 0;
}