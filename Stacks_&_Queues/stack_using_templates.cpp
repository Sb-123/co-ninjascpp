#include <climits>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class stackUsingArray
{

private:
    T *data;
    int nextIndex;
    int capacity;

public:
    stackUsingArray()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }

    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
};

int main()
{
    stackUsingArray<char> s;
    s.push(101);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}