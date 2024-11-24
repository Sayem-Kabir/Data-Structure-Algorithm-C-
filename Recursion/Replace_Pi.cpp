#include<iostream>
using namespace std;

void replace_Pi(string s)
{
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<" 3.14 "<<" ";
        replace_Pi(s.substr(2));
    }
    else
    {
        cout<<s[0]<<" ";
        replace_Pi(s.substr(1));
    }
}

int main()
{
    replace_Pi("sspihsjfpifbajspi");
}
