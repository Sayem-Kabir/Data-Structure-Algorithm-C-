#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0; i<s.length(); ++i)
    {

        if(s[i]==','&&s[i]==' ')
            continue;
    }
    string s1=s;

    reverse(s.begin(), s.end());

    if(s==s1)
        cout<<"True";
    else
        cout<<"False";
}
