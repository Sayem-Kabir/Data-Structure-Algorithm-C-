#include<iostream>
using namespace std;

/*
return the fibonacci number of nth index
*/

int Fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    int preFibo = Fibo(n-1) + Fibo(n-2);
    return preFibo;
}

int main()
{
    int n;
    cout<<"Enter Number = "<<" ";
    cin>>n;
    cout<<Fibo(n)<<endl;
}
