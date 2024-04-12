#include <bits/stdc++.h>
using namespace std;

// Map are used in the form of tree

int main()
{
    string s = "aabbcaa";
    map<string, int> mp; // Initialization of map
    for (int i = 0; i < s.size(); i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        mp[temp]++; // Insertion in map
        cout << temp << " ";
    }

    // Basic for loop cannot work for map
    // the elements are stored in different way than array 
    // we use iterators in map
    // to print elements of map
    // auto is a iterator that is used to 
    for(auto ele:mp){
        cout << ele.first << " ";   // this will give String value  (key)
        cout << ele.second << endl;  // this will give int value    (value)
    }


    cout << mp.count("aa") << endl;    // check if it is present in map or not
    mp.find("aa");
    cout << mp.size();
    mp.erase("aa");
    mp.clear();
}