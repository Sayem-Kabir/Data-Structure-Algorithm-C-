#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int ct=0;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; ++i)
    {
        if(arr[i]==arr[i+1])
        {
            ct++;
        }
    }
    if(ct>0)
        cout<<"True";
    else
        cout<<"False";
}
