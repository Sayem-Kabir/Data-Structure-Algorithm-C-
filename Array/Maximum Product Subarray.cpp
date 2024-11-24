#include<iostream>  //kadane algorithm
using namespace std;

int main()
{
    int multi=1,maxi=0;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; ++i)
    {
        multi=multi*arr[i];
        maxi=max(maxi,multi);
        if(multi<0)
            multi=0;
    }
    cout<<maxi;
}

