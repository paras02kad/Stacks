#include <stack>
#include <iostream>

using namespace std;

int main()
{

    stack<int> st_1;
    stack<int> st_2;
    stack<int> st_3;

    st_1.push(1);
    st_1.push(2);
    st_1.push(3);
    st_1.push(4);
    st_1.push(5);

    while (st_1.size() != 0)
    {
        st_2.push(st_1.top());
        cout<<st_1.top()<<endl;
        st_1.pop();
    }
    cout << endl;

    while (st_2.size() != 0)
    {
        st_3.push(st_2.top());
        cout<<st_2.top()<<endl;
        st_2.pop();
    }
    cout << endl;

    while (st_3.size() != 0)
    {
        
        st_1.push(st_3.top());
        cout << st_1.top() << endl;
        st_3.pop();
    }
cout<<endl;
    while (st_1.size() != 0)
    {
        
       
        cout << st_1.top() << endl;
        st_1.pop();
    }

    return 0;
}