#include <bits/stdc++.h>
#include "QueueUsingArray.h"
using namespace std;

int main()
{

    queueUsingArray<int> u(5);

    u.enqueue(10);
    u.enqueue(20);
    u.enqueue(30);
    u.enqueue(40);
    u.enqueue(50);
    u.enqueue(60);

    cout << u.fornt() << endl;
    cout << u.deque() << endl;
    cout << u.deque() << endl;
    cout << u.deque() << endl;
    cout << u.deque() << endl;

    cout << u.getSize() << endl;
    cout << u.isEmpty() << endl;
}