#include<iostream>     //kadane algorithm
using namespace std;

int main()
{
    int sum=0,maxi=0;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; ++i)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
            sum=0;
    }
    cout<<maxi;
}
