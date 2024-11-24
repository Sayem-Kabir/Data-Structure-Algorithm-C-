#include<iostream>
using namespace std;

int friendparing (int n)
{
    if (n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendparing(n-1)+friendparing(n-2);
}

int main ()
{
    cout<<friendparing(5);
}
