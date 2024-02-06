#include <stack>
#include <iostream>
using namespace std;
int main()
{

    // cout << st.size() << endl;//0
    // st.push(23);
    // cout << st.top() << endl;//23
    // cout << st.size() << endl;//1
    // st.pop();
    // cout << st.size() << endl;//0

    // while(st_1.size()!=0)
    // {
    //     st_2.push(st_1.top());
    //     st_1.pop();
    // }

    // while(st_2.size()!=0)
    // {
    //     cout<<st_2.top()<<endl;
    //     st_1.push(st_2.top());
    //    st_2.pop();
    // }

    // while(st_1.size()!=0)
    // {
    //     int x;
    //     cout<<st_1.top()<<endl;
    //     st_1.top()=x;
    //    st_1.pop();
    // }

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
        cout << st_1.top() << endl;
        st_2.push(st_1.top());
        st_1.pop();
    }

    while (st_2.size() != 0)
    {
        st_3.push(st_2.top());
        st_2.pop();
    }

    while (st_1.size() != 0)
    {
        st_1.push(st_3.top());
        st_3.pop();
    }

    
    while (st_1.size() != 0)
    {
        cout << st_1.top() << endl;
        st_1.pop();
    }

    return 0;
}