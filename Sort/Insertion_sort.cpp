#include<iostream>
using namespace std;
int main ()
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

    int cnt = 0, j;
   for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--)
        {
            arr[j+1] = arr[j];  // i = j+1 , big data will replace small data
            cnt++;
        }
        arr[j+1] = temp; // for compare again
    }

     for(int i;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
