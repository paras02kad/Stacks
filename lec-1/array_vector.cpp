#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class myStack
{
private:

int arr;
int size;
int indx;

public:

    myStack(int val)
    {
        size = val;
        arr = new array[size];
        indx = -1;
    }
    
    ~myStack()
    {
        delete[] arr;
    }

    void push(int val)
    {
        if (indx == size)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            int data = val;
            arr[++indx] = data;
    
            return;
        }
    }

    void pop()
    {
        if (indx == 0)
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
            int ans = arr[indx];
            return (ans); 
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

myStack st(5);

    return 0;
}