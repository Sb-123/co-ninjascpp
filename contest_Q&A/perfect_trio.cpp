#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;

        if (a == b + c || b == c + a || c == a + b)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        t--;
    }
    return 0;
}
