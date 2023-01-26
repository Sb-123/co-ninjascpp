#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x, y;
        cin >> x;
        cin >> y;

        if (x > 10 * y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }
    return 0;
}