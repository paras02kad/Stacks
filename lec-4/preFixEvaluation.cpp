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
    string s = "-/*+79483";
    stack<int> val;
    int n = s.length();

    for (int i = n-1; i>=0; i--)
    {

        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }

        else
        {
            int val1 = val.top();
            val.pop();

            int val2 = val.top();
            val.pop();

            int ans = machine(val1, val2, s[i]);

            val.push(ans);
        }
    }

    cout << val.top() << endl;

    return 0;
}