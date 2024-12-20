#include<iostream>
using namespace std;

void swap(int arr[ ], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapify(int arr[ ], int n, int i)
{
    int maxIdx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[maxIdx])
    {
        maxIdx=l;
    }
    if(r<n && arr[r]>arr[maxIdx])
    {
        maxIdx=r;
    }
    if(maxIdx!=i)
    {
        swap(arr[i], arr[maxIdx]);
        heapify(arr, n, maxIdx);
    }

}

void heapSort(int arr[ ], int size)
{
    for(int i=size/2-1; i>=0;i--)
    {
        heapify(arr,size,i);
    }

    for(int i=size-1;i>0;i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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

    heapSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
