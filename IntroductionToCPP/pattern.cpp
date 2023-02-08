#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int nsi = n;
    int nsi1 = n;
    int nsi2 = n;
    int nst = 0;

    int row = 0;
    for (int r = 0; r < n; r++)
    {
        for (int c1 = 1; c1 <= nsi1; c1++)
        {
            cout << c1;
        }

        for (int j = 1; j <= nst; j += 2)
        {
            cout << "*";
        }
        for (int k = nsi2; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
        nsi1--;
        nsi2--;
        nst += 2;
    }
    return 0;
}