#include <bits/stdc++.h>
using namespace std;

string machine(string val1, string val2, char type)
{
    string ans ="";
    ans+=type;
    ans+=val1;
    ans+=val2;
    return ans;
    
}

int main()
{
    string s = "79+4*8/3-";
    stack<string> val;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
        }

        else
        {
           string val2 = val.top();
            val.pop();

            string val1 = val.top();
            val.pop();

            string ans = machine(val1, val2, s[i]);
            val.push(ans);
        }
    }

    cout << val.top() << endl;

    return 0;
}