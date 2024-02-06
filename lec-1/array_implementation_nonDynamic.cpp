#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    int arr[5];
    int indx;

    myStack()
    {
        indx = -1;
    }
    void push(int val)
    {
        if (indx == 5)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        else
        {
            arr[++indx] = val;
            return;
        }
    }

    void pop()
    {
        if (indx == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        else
            indx--;
        return;
    }

    int top()
    {
        if (indx >= 0)
        {
            return arr[indx];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    int size()
    {
        return (indx + 1);
    }
};

int main()
{

    myStack st;

    st.push(23);

    cout << st.top() << endl;//23

    st.pop();

    cout << st.size() << endl;//0
    st.push(33);
    cout << st.size() << endl;//1
    cout << st.top() << endl;//33

    return 0;
}