#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int left, int right) {

    while(left<right)
    {
        if(arr[left]<=arr[right])
            return arr[left];

        int mid= (left+right)/2;

        if(arr[left] > arr[mid])
        {
            right=mid;
        }
        else if(arr[mid] > arr[right])
        {
            left=mid+1;
        }
    }
}



int main()
{
    int n=7;
    int arr[n]={4,5,6,7,0,1,2};
    cout<<findMin(arr,0,n-1);
}
