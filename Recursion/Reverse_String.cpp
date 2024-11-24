#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string restofString = s.substr(1);
    reverse(restofString);
    cout<<s[0]<<" ";
}

int main()
{
    reverse("Sayem");
}
