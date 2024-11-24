#include<iostream>
using namespace std;
//give a number and it will print in desc order from that number to 1

void desc(int n)
{
    if (n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    desc(n-1);
}

int main()
{
    int n;
    cout<<"Enter Number = "<<" ";
    cin>>n;
    desc(n);
}
