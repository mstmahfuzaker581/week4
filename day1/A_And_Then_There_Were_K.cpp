#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= 30; i++)
        {
            int x = pow(2, i);
            if (n < x)
            {
                x = pow(2, (i - 1));
                cout << x - 1 << endl;
                break;
            }
        }
    }
}