#include<iostream>
using namespace std;

string longestCommonPrefix(string arr[], int n)
{
    string ans;
    string str = arr[0];
    if(n==0)
        return " ";
    if(n==1)
        return str;

    for(int i=0; i<n; ++i)
    {
        int j=1;
        while(j<n)
        {
            if(str[i]==arr[j][i])
                j++;
            else
                return ans;
        }
        ans += str[i];
    }
    return ans;
}

string longest_Common_Prefix(string arr_strings[], int arr_size)
{

    // If array size is 0, return empty string
    int size = arr_size;
     string str = arr_strings[0];
     if(size == 1)
        return str;
    string result = "";
    int j = 1;
    for(int i=0; i<size; i++){
        while(j < size){
            if(str[i] == arr_strings[j][i]){
                j++;
            }
            else{
                return result;
            }
        }
        result += str[i];
        j = 1;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    cout<<longestCommonPrefix(arr,n);
    //cout<<longest_Common_Prefix(arr,n);

}
