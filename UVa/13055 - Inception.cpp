#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    string cur, type;
    stack <string> st;
    LL T;
    scanf("%lld", &T);
    while(T--)
    {
        cin >> type;
        if(type == "Test")
        {
            if(st.empty())
            {
                printf("Not in a dream\n");
            }
            else
            {
                cout << st.top() << endl;
            }
        }
        else if(type == "Kick" && !st.empty())
        {
            st.pop();
        }
        else if(type == "Sleep")
        {
            cin >> cur;
            st.push(cur);
        }
    }
    return 0;
}
