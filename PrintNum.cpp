#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    // Using For loop
    cout << "Using For Loop:";
    for(int i = 1; i<=n ; i++){
        cout << i << endl;
        // endl is alternative of \n
    }

    // Using while loop
    cout << "Using While Loop: ";
    int i=1;
    while(i<=n){
        cout << i << endl;
        i++;
    }
}