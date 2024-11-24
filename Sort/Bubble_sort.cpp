#include<iostream>
using namespace std;
int main ()
{
     int n;
    int temp =0;

    cout<<"Total number = ";
    cin>>n;
    int arr[n];
    cout<<endl;
   cout<<"Give Elements = ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i= 0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else continue;
        }
    }

    for(int i;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
