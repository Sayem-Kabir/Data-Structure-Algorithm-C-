#include <iostream>
using namespace std;

int LastOcc(int arr[ ],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    int restArray = LastOcc(arr,n,i+1,key);
    if(restArray != -1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
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
   cout<< LastOcc(arr,n,0,5) <<endl;
}
