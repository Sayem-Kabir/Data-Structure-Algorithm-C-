#include<iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }

    int prePower = power(n, p-1);
    return n * prePower;
}

int main()
{
    int n,p;
    cout<<"Give Number = "<<" ";
    cin>>n;
    cout<<"Give Power =" <<" ";
    cin>>p;
    cout<<power(n,p)<<endl;
}
