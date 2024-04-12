#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "racecar";
    int i =0;
    int j= s.size() - 1;
    while(i<=j){
        if(s[j] == s[i]){
            j--;
            i++;
        }
        else{
            cout << "No" << endl;
            break;
        }
    }
    if(i>j){
        cout << "Yes" << endl;
    }
}