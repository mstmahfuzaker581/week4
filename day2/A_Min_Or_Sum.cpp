#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            ans |= val;
        }
        cout << ans << endl;
    }
}