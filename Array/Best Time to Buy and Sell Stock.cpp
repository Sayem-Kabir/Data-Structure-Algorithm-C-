#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = INT_MAX, index, ans=0;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }


    for(int i=0; i<n; ++i)
    {
        if(arr[i]<a)
            a = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            if(i==n)
                index = 0;
            else
                index = i;
                break;
        }
    }
    ans = *max_element(arr+index, arr+n)-a;
    cout<<ans;

}
