
#include<bits/stdc++.h>

using namespace std;

string consecutiveString(string s)
{
    int n = s.length();
    stack<char>st;
    string ans="";

    for (int i = 0; i < n; i++)
    {
        if(i==0)st.push(s[i]);
        if (s[i] == st.top())
            continue;
        else
            st.push(s[i]);
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s = "aaabbcddaabbffg";
    cout<<consecutiveString(s)<<endl;
    return 0;
}