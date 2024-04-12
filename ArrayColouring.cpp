#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        
        int size;
        int count = 0;
        cin >> size;
        for(int i=0 ; i<size; i++){
            int num;
            cin >> num;
            if(num % 2 != 0){
                count++;
            }
        }
        if(count % 2 != 0){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    
}