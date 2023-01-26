#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    int val = ch;

    if (val >= 65 && val <= 90)
    {
        cout << "1";
    }
    else if (val >= 97 && val <= 122)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    cout << endl;
    return 0;
}