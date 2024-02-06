#include <stack>
#include <iostream>

using namespace std;

int main()
{

    stack<int> st_1;
    stack<int> st_2;

    st_1.push(1);
    st_1.push(2);
    st_1.push(3);
    st_1.push(4);
    st_1.push(5);

    int x = 23;

    while (!st_1.empty())
    {
        st_2.push(st_1.top());
        st_1.pop();
    }

    // while (!st_2.empty())
    // {
    //     if (st_2.size() == 3)
    //     {
    //         st_1.push(x);
    //     }

    //     else
    //     {
    //         st_1.push(st_2.top());
    //         st_2.pop();
    //     }
    // }

    while (!st_2.empty()) {
    if (st_2.size() == 3) {
        st_1.push(x);
    } else {
        st_1.push(st_2.top());
        st_2.pop();
    }
}


    while (!st_1.empty())
    {
        cout <<st_1.top()<< endl;
        st_1.pop();
    }

    return 0;
}