#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    string s;
    cin >> t;
    getchar();
    while(t--)
    {
        getline(cin, s);
        stack <char> st;
        for(i=0; i<s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!st.empty())
                {
                    if(st.top() == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    st.push(s[i]);
                    break;
                }
            }
            else if(s[i] == ']')
            {
                if(!st.empty())
                {
                    if(st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    st.push(s[i]);
                    break;
                }
            }
        }
        if(st.empty())
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
