#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool ans = true;
    stack<char>st;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }

        else if(s[i]==')')
        {
            if(!st.empty() && st.top()== '(')
            {
                st.pop();
            }
            else
                ans=false;
                break;
        }

        else if(s[i]==']')
        {
            if(!st.empty() && st.top()== '[')
            {
                st.pop();
            }
            else
                ans=false;
                break;
        }

        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()== '{')
            {
                st.pop();
            }
            else
                ans=false;
                break;
        }

        if(st.empty())
            ans=false;

    }

    if(ans==1)
        cout<<"true";
    else if(ans!=1)
        cout<<"false";
}
