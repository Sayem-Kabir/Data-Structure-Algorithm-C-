#include<bits/stdc++.h>
using namespace std;


void countDuplicates(string s)
{
    int ct=1;

    int n = s.length();

    sort(s.begin(), s.end());

    for(int i=0;i<n;++i)
    {
        while(i<n-1 && s[i]==s[i+1])
        {
                ct++;
                i++;
        }
        if(ct>1)
        {
            cout<<s[i]<<" count = "<<ct<<endl;
        }
    }
}

void printDuplicates(string str){
        int len = str.length();

    // Sorting the string
    sort(str.begin(), str.end());

    // Loop through the sorted string to find duplicates
    for(int i = 0; i < len; i++) {
        int count = 1;

        // Counting the occurrences of each character
        while(i < len-1 && str[i] == str[i+1]) {
            count++;
            i++;
        }

        // Printing the duplicate character and its count
        if(count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }

}

int main()
{
    string s;
    cin>>s;






    countDuplicates(s);
    //printDuplicates(s);
    return 0;
}
