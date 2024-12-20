#include<bits/stdc++.h>
using namespace std;

string print(string str[], string s)
{
    string ans;
    int n = s.length();
    for(int i=0; i<n; ++i)
    {
        if(s[i]==' ')
        {
            ans += "0";
        }

        else
        {
            int position = s[i]-'A';
            ans += str[position];
        }
    }
    return ans;
}

string printSequence(string arr[], string input)
{
    string output = "";

    // length of input string
    int n = input.length();
    for (int i = 0; i < n; i++) {
        // Checking for space
        if (input[i] == ' ')
            output = output + "0";

        else {
            // Calculating index for each
            // character
            int position = input[i] - 'A';
            output = output + arr[position];
        }
    }

    // Output sequence
    return output;
}

int main()
{
    string s = "GEEKSFORGEEKS";

    string str[]= { "2",   "22",  "222",
                    "3",   "33",   "333",
                    "4",    "44",  "444",
                    "5",   "55",  "555",
                    "6",   "66",    "666",
                    "7",   "77",  "777", "7777",
                    "8",   "88",    "888",
                    "9",   "99",  "999", "9999" };
    cout<<print(str,s);
    //cout<<printSequence(str,s);
    return 0;

}
