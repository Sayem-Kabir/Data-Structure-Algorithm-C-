#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int key, int left, int right)
{
    if(left>right)
        return -1;

    int mid = (left+right)/2;
    if(arr[mid]==key)
        return mid;

    if(arr[left]<=arr[mid])
    {
        if(key>=arr[left] && key<=arr[mid])
            return searchInRotatedArray(arr, key, left, mid-1);
        else
            return searchInRotatedArray(arr, key, mid+1, right);
    }
    else
    {
        if(key>=arr[mid] && key<=arr[right])
            return searchInRotatedArray(arr, key, mid+1, right);
        else
            return searchInRotatedArray(arr, key, left, mid-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];

    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    int i = searchInRotatedArray (arr, key, 0, n-1);
    if(i==-1)
        cout<<"No ans";
    else
        cout<<"Index = "<<i;
}
