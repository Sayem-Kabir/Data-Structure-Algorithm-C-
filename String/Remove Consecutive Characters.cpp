#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string ans;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]==s[i+1])
            continue;
        else
            ans+=s[i];
    }
    cout<<ans;
}
