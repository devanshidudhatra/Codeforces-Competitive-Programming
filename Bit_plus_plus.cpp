#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int X = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if (s == "X++")
        {
            X++;
        }
        if (s == "++X")
        {
            ++X;
        }
        if (s == "X--")
        {
            X--;
        }
        if (s == "--X")
        {
            --X;
        }
    }
    cout << X << endl;
}