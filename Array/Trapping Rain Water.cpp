#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int left[n];
    int right[n];
    int ans=0;

    int arr[n];

    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    left[0] = arr[0];
    for(int i=1; i<n; ++i)
    {
        left[i] = max(left[i-1],arr[i]);
    }

    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; --i)
    {
        right[i] = max(right[i+1],arr[i]);
    }

    for(int i=0; i<n; ++i)
    {
        ans = ans+ min(left[i],right[i])-arr[i];
    }
    cout<<ans;
}
