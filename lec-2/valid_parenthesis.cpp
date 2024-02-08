class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.length();

        if (n % 2 != 0)
            return false;

        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;
                    
                else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
                {
                    if (st.top() == '(' || st.top() == '[' || st.top() == '{')
                    {
                        st.pop();
                    }
                }
            }
        }
            if (st.size() == 0)
                return true;
            else
                return false;
        }
};