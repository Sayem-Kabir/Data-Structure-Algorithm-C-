#include<iostream>
using namespace std;

void Asc(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    Asc(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter Number = "<<" ";
    cin>>n;
    Asc(n);
}
