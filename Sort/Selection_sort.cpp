#include<iostream>
using namespace std;
int main()
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

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            else continue;
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}






