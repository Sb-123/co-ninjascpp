#include <iostream>
#include <string>
using namespace std;

#include <stack>

int countBracketReversals(string s)
{
    // Write your code here
    int cnt = 0;

    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char curr = s[i];

        if ((s.size()) % 2 != 0)
        {
            return -1;
        }
        else
        {

            if (curr == '{')
            {
                st.push(curr);
            }
            else
            {
                if (st.empty())
                {
                    st.push(curr);
                }
                else if (!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else if (!st.empty() && st.top() != '{')
                {
                    st.push(curr);
                }
            }
        }
    }

    char c1 = st.top();
    st.pop();
    char c2 = st.top();
    st.pop();

    if (c1 == c2)
    {
        cnt += 1;
    }
    else
    {
        cnt += 2;
    }

    return cnt;

    // cout << st.size() << endl;
}

int main()
{
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}