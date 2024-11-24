#include<iostream>
using namespace std;
// checks an array if its sorted or not
bool sorted(int arr[ ], int n)
{
    if (n==1)
    {
        return true;
    }

    bool restArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main()
{
    int n;
    cout<<"Total number = ";
    cin>>n;
    int arr[n];
    cout<<endl;
   cout<<"Give Elements = ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n)<<endl;
}

