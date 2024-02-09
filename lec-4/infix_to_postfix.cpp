#include <bits/stdc++.h>
using namespace std;

string machine(string val1, string val2, char type)
{
    string ans = "";
    ans += val1;
    ans += val2;
    ans += type;
    return ans;
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
    stack<string> val;
    stack<char> op;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
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

                while (op.top() != '(')
                {
                    string val2 = val.top();
                    val.pop();

                    string val1 = val.top();
                    val.pop();

                    char type = op.top();
                    op.pop();

                    string ans = machine(val1, val2, type);

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

                    string val2 = val.top();
                    val.pop();

                    string val1 = val.top();
                    val.pop();

                    char type = op.top();
                    op.pop();

                    string ans = machine(val1, val2, type);

                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (op.size() > 0)
    {

        string val2 = val.top();
        val.pop();

        string val1 = val.top();
        val.pop();

        char type = op.top();
        op.pop();

        string ans = machine(val1, val2, type);

        val.push(ans);
    }

    cout << val.top() << endl;
    return 0;
}