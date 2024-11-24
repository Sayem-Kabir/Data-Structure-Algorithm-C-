#include<iostream>
using namespace std;

void subString(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string restofString = s.substr(1);
    subString(restofString,ans);
    subString(restofString,ans+ch);
}

int main()
{
    subString("abc","");
}
