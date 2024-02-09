#include <bits/stdc++.h>
using namespace std;

int machine(int val1, int val2, char type)
{
    if (type == '+')
        return (val1 + val2);
    if (type == '-')
        return (val1 - val2);
    if (type == '*')
        return (val1 * val2);
    if (type == '/')
        return (val1 / val2);
}

int main()
{
    string s = "79+4*8/3-";
    stack<int> val;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }

        else
        {
            int val2 = val.top();
            val.pop();

            int val1 = val.top();
            val.pop();

            int ans = machine(val1, val2, s[i]);

            val.push(ans);
        }
    }

    cout << val.top() << endl;

    return 0;
}