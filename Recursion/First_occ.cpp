#include<iostream>
using namespace std;
int firstOcc(int arr[ ], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstOcc(arr,n,i+1,key);
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
   cout<< firstOcc(arr,n,0,5) <<endl;
}
