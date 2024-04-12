// Set is same as map but there are no key value pairs;
// it can only distinct elements
// we can store many elements by multi set

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization of set
    set<int> s;
    vector<int> v = {5, 3, 4, 1, 2, 1};
    for (auto it : v)
    {
        s.insert(it);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    s.insert(1);
    s.erase(1);
    s.size();
    s.count(1);
    s.find(1);
}