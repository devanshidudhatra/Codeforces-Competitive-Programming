// k - no. of bottles
// l - ml in 1 bottle
// c - no. of limes
// d - slice pf each lime;
// p - grams of salt
// nl ml, 1 slice, np salt -  needed to make a toast

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}