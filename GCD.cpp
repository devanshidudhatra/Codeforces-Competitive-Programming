#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout << __gcd(1,4) << endl;
    // cout << (2*4)/(__gcd(2,4));

    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        cout << 1 << " " << num-1 << endl; 
    }
    // while(n--){
    //     int num;
    //     cin >> num;
    //     for (int i=1 ; i<=100 ; i++){
    //         bool flag=true;
    //         for( int j=1 ; j<=100 ; j++){
    //             int gcd = __gcd(i,j);
    //             int lcm = (i*j)*(gcd);
    //             if(gcd+lcm == num){
    //                 cout << gcd << " " << lcm << endl;
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //         if(!flag) break;
    //     }
    // }
}