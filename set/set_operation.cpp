#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(5);

    cout << s.size() << endl;

    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.erase(2);
    cout << s.size() << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.clear();
    cout << s.size() << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}