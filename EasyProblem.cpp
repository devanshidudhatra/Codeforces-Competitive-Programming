#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    int temp = n;
    while(n--){
        int op;
        cin >> op;
        if(op == 1){
            cout << "HARD" << endl;
            break;
        }
        if(op == 0){
            count++;
        }
    }
    if(count == temp){
        cout << "EASY" << endl;
    }
}