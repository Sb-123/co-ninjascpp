#include <bits/stdc++.h>
using namespace std;
template <typename T>
class queueUsingArray
{

    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    queueUsingArray(int s)
    {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    // insert element :-
    void enqueue(T element)
    {
        if (size == capacity)
        {
            T *newdata = new T[2 * capacity];
            int j = 0;
            for (int i = firstIndex; i < capacity; i++)
            {
                newdata[j] = data[i];
                j++;
            }
            for (int i = 0; i < firstIndex; i++)
            {
                newdata[j] = data[i];
                j++;
            }
            delete[] data;
            data = newdata;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;

            // cout << "queue is full" << endl;
            // return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity; // nextIndex++;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T fornt()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return 0;
        }
        return data[firstIndex];
        ;
    }

    T deque()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity; // firstIndex++;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }

        return ans;
    }
};
