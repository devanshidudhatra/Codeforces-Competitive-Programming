#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        int max =0;
        int size;
        cin >> size;
        string s;
        cin >> s;
        for(int i=0 ; i<size ; i++){
            if(max < s[i] - 97 + 1){
                max = s[i] - 97 + 1;
            }
        }
        cout << max << endl;
    }
}