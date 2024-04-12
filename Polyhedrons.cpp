#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    string shape;
    while(n--){
        cin >> shape;
        if(shape == "Tetrahedron"){
            ans +=4;
        }
        if(shape == "Cube"){
            ans +=6;
        }
        if(shape == "Octahedron"){
            ans +=8;
        }
        if(shape == "Dodecahedron"){
            ans +=12;
        }
        if(shape == "Icosahedron"){
            ans +=20;
        }
    }
    cout << ans;
}