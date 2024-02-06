#include <stack>
#include <iostream>

using namespace std;

void print(stack<int>&st)
{
    if (st.empty())return;
    
        int x = st.top();
        st.pop();
        print(st);
        cout << x << endl;
        st.push(x);

}

int main()
{

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    print(st);

    return 0;
}