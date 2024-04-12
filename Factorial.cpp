#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int n1;
        cin >> n1;
        long long ans = 1;
        for(int i=1; i<=n1; i++){
            ans = ans * i;
        }
        cout << ans << endl;
    }
    
}