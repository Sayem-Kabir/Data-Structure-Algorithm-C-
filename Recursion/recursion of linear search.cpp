#include<iostream>
using namespace std;

int Linear_searchs (int arr[],int n, int i, int key)
{
    if(i==n-1)
    {
        cout<<"Not found";
        return -1;
    }

    if(arr[i]==key)
    {
        cout<<"Found at= "<<i<<endl;
        return i;

    }
    return Linear_searchs(arr,n,i+1,key);
}
int main()
{
    int arr[]={2,3,4,5,6};
   Linear_searchs(arr,5, 0, 3);
}
