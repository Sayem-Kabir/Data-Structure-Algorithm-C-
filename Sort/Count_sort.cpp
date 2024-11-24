#include<iostream>
using namespace std;

void countSort(int arr[], int n) // to find the maximum value
{
    int largest = arr[0];
    for(int i=0; i<n; i++)
    {
        largest=max(largest, arr[i]);
    }

    int count[10000] = {0};
    for (int i=0; i<n;i++)  //count repeatation for every index
    {
        count[arr[i]]++;
    }

    for(int i=1; i<=largest; i++)  // largest value becomes largest index of the array
    {
        count[i] += count[i-1];  // add the previous value
    }

     int output[n];
    for(int i=0; i<n; i++)
    {
        output[--count[arr[i]]] = arr[i];  // decrement the value of every index by 1
    }

    for(int i=0; i<n;i++)
    {
        arr[i] = output[i];
    }
}






int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0; i<9;i++)
    {
        cout<< arr[i]<<" ";
    }

}
