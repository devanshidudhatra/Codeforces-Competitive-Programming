#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int count = 0;
    for(int i=1; i<=row ; i++){
        if( i%2 != 0){
            for(int j=1 ; j<=col ; j++){
                cout << "#";
            }
            cout << endl;
        }
        else{
            if(count == 0){
                for(int j=1; j< col ; j++){
                    cout << ".";
                }
                cout << "#" << endl;
                count = 1;
            }
            else{
                cout << "#";
                for(int j=2 ; j<=col ; j++){
                    cout << "." ;
                }
                cout << endl;
                count = 0;
            }
        }
    }
}