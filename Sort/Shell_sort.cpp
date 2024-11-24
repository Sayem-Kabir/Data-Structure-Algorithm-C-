#include<iostream>
using namespace std;

void shellSort(int arr[],int n)
{
    int gap,i,j,temp;

    for(gap=n/2;gap>=1;gap/=2)
    {
       for(i=gap;i<n;i++)
    {
            temp=arr[i];
            j=i-gap;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+gap]=arr[j];
            j=j-gap;
        }
            arr[j+gap]=temp;
    }
    }
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

    shellSort(arr,n);

     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
