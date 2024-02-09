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

int prio(char type)
{
    if (type == '/' || type == '*')
        return 2;
    else
        return 1;
}

int main()
{
    string s = "(7+9)*4/8-3";
    stack<int> val;
    stack<char> op;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }

        else
        {
            if (op.size() == 0)
                op.push(s[i]);

            else if (s[i] == '(')
                op.push(s[i]);

            else if (op.top() == '(')
                op.push(s[i]);

            else if (s[i] == ')')
            {
                
                    while (op.top()!= '(')
                    {
                        int val2 = val.top();
                        val.pop();

                        int val1 = val.top();
                        val.pop();

                        char type = op.top();
                        op.pop();

                        int ans = machine(val1, val2, type);

                        val.push(ans);
                    }
                    op.pop();
                
            }
            else if (prio(s[i]) > prio(op.top()))
                op.push(s[i]);

            else
            {
                while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
                {
                    int val2 = val.top();
                    val.pop();

                    int val1 = val.top();
                    val.pop();

                    char type = op.top();
                    op.pop();

                    int ans = machine(val1, val2, type);

                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (op.size() > 0)
    {
        int val2 = val.top();
        val.pop();

        int val1 = val.top();
        val.pop();

        char type = op.top();
        op.pop();

        int ans = machine(val1, val2, type);

        val.push(ans);
    }

    cout << val.top() << endl;
    cout << (7 + 9) * 4 / 8 - 3 << endl;
    return 0;
}