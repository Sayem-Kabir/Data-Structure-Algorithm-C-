#include<iostream>
using namespace std;

/*

sum of numbers =
Suppose the number is 5
so it will sum from 1 to 5

*/

int Sum(int n)
{
    if(n==0)   // Base case
    {
        return 0;
    }

    int preSum = Sum (n-1);
    return n+preSum;
}

int main()
{
    int n;
    cout<<"Enter Number = "<<" ";
    cin>>n;
    cout<<Sum(n)<<" ";
}
