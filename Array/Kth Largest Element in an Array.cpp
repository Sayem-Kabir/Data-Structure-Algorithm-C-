#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans;
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    ans = *min_element(arr+(n-k), arr+n);
    cout<<ans;
}
