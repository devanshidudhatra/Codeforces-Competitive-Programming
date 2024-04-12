#include<bits/stdc++.h>
using namespace std;

int main(){
    double L,H;
    cin >> L;
    // cout << " ";
    cin >> H;
    double ans;
    ans = ((H*H) - (L*L)) / (2*L);
    // because we want to get 16 digits after point
    cout << fixed << setprecision(13) << ans;
}