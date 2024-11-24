#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int preFact = fact (n-1);
    return n*preFact;
}

int main()
{
    int n;
    cout<<"Enter Number = "<<" ";
    cin>>n;
    cout<<fact(n)<<endl;
}
