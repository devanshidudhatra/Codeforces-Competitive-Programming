// k,  the cost of the first banana
//     n, initial number of dollars the soldier has
//         w, number of bananas he wants
//     (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k , n , w;
    cin >> k >> n >> w;
    int cost = 0;
    for(int i = 1 ; i<=w ; i++){
        cost = cost + i*k;
    }
    int borrow = cost - n;
    if(borrow < 0){
        cout << 0;
    }
    else{
        cout << borrow;
    }
}