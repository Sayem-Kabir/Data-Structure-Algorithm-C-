#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    int n,a;
    cin>>n;
    int arr[n];

    for(int i=1; i<=n; ++i)
    {
        cin>>arr[i];
    }

    for (int i = 1; i <=n; i++) {
        if (arr[abs(arr[i]) ] > 0)
            arr[abs(arr[i]) ] = -arr[abs(arr[i]) ];
        else {
            x = abs(arr[i]);
        }
    }

     for (int i = 1; i <= n; i++) {
        if (arr[i] > 0) {
            y = i;
            break;
        }
    }
    cout<<x<<" "<<y;
}
