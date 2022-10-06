#include <iostream>
#include <stack>
using namespace std;

#include <stack>
void reverseStack(stack<int> &input, stack<int> &extra)
{
    // Write your code here
    int len = input.size();

    if (input.empty())
    {
        return;
    }

    int temp = input.top();
    input.pop();
    reverseStack(input, extra);

    for (int i = 0; i < len; i++)
    {
        int curr = input.top();
        extra.push(curr);
        input.pop();
    }

    extra.push(temp);

    for (int i = 0; i < len; i++)
    {
        int curr2 = extra.top();
        input.push(curr2);
        extra.pop();
    }
}

int main()
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++)
    {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty())
    {
        cout << input.top() << " ";
        input.pop();
    }
}