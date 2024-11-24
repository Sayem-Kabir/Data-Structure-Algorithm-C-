#include<iostream>
#include<stack>
using namespace std;

int precidency(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

    string infixtoPostfix(string s)
    {
        stack <char> st;
        string result;

        for(int i = 0; i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                result+=s[i];
            }
            else if (s[i]=='(')
                {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='(' )
                {
                    result += st.top();
                    st.pop();
                }
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && precidency(st.top())>precidency(s[i]))
                {
                    result += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }

     while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        return result;
    }


int main()
{
    string s;
    cout<<"Enter your Infix Expression to make Postfix "<<endl;
    cin>>s;
    cout<<"Your Postfix Expression"<<endl;
    cout<<infixtoPostfix(s)<<endl;

  //  cout<<infixtoPostfix("(a-b/c)*(a/k-l)");
}
