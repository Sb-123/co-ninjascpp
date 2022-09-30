#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    // st.size();
    cout << st.size() << endl;
    cout << st.top() << endl;
    cout << st.empty() << endl;
}