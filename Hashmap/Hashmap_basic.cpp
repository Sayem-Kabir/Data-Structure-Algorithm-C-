#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*Note : # map based on BST, so it will insert the values according to the index numbers
               time complexity of map is O(log n)
             # Unordered map insert the values according to the line of code
             for example: if we put 2 first then put 0 and 3
             it will insert the value of 2 first then 0 then 3
             time complexity of ordered map is O(1)*/


    /// Creation
    //unordered_map<string,int> m;
    map<string,int>m;

    ///Insertion (Entry will be unique)

    // Process-1
    pair<string,int> p1 = make_pair("sayem",1);
    m.insert(p1);

    // Process-2
    pair<string,int> p2("kabir",2);
    m.insert(p2);

    //Process-3
    m["Angel"] = 3;
    m["Angel"] = 4; // update

    /// Search
    // process 1
    cout<<m["sayem"]<<endl;
    // process 2
    cout<<m.at("kabir")<<endl;

    //cout<<m.at("Md")<<endl; // it will throw an error if we give an un-inserted value to search in at() function
    cout<<m["Md"]<<endl; // it will assign the un-inserted value to index 0
    cout<<m.at("Md")<<endl; // once it inserted at 28 no line, thus it will return the index 0

    /// Size
    cout<<m.size()<<endl;

    /// Check presence
    cout<<m.count("Hello")<<endl; // returns zero if absent in map
    cout<<m.count("sayem")<<endl; // returns one if present in map

    /// Delete or Erase
    m.erase("Angel");
    cout<<m.size()<<endl;

    ///Iterator

    // All index visit automatically
    for(auto i:m)
        cout<<i.first <<" "<<i.second<<endl;

    // Visit index by index
    //unordered_map<string,int> :: iterator it = m.begin();
    map<string,int> :: iterator it = m.begin();
    while (it !=m.end())
    {
        cout<< it->first <<" "<<it->second <<endl;
        it++;
    }



}
