#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    vector<int> brr(n, 0);
    for (int i = 0; i < n; i++)
    {
        brr[i] = mx - arr[i];
    }

    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[j] > 0)
            {
                cout << "  ";
                brr[j] -= 1;
            }
            else
            {
                cout << "* ";
            }
        }
        cout <<endl;
    
    }
}