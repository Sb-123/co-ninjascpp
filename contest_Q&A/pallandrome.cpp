#include <bits/stdc++.h>
using namespace std;

bool isPallandrome(int x)
{
    long long y = x;
    if (x < 0)
        return false;
    long long rev = 0;
    while (x != 0)
    {
        long long last = x % 10;
        rev *= 10;
        rev += last;
        x /= 10;
    }
    cout << y << endl;
    cout << rev << endl;
    return (y == rev);
}

int main()
{
    int n;
    cin >> n;
    cout << isPallandrome(n) << endl;
    return 0;
}