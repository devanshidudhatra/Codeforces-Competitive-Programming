#include<bits/stdc++.h>
using namespace std;

int main(){
    int stops;
    cin >> stops;
    int capacity =0; 
    int max=0;
    for(int i=1 ; i<=stops ; i++){
        int a_i , b_i;
        cin >> a_i >> b_i;
        max = max - a_i;
        max = max + b_i;
        if(max > capacity){
            capacity = max;
        }
    }
    cout << capacity << endl;
}