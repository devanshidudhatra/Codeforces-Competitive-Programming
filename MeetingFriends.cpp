#include<bits/stdc++.h>
using namespace std;

int main(){
    int f1,f2,f3;
    cin >> f1 >> f2 >> f3;

    int total = f1 + f2 + f3;
    int maxi = max(max(f1,f2) , f3);
    int mini = min(min(f1,f2) , f3);
    int middle = total - maxi - mini;
    int meet = (maxi - middle) + (middle - mini);
    cout << meet << endl;
}