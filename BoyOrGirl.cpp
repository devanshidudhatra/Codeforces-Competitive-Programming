#include<bits/stdc++.h>
using namespace std;

// & is the bitwise operator
// &1 means if both input bits are 1 then output is 1 otherwise 0
// ans is converted to binary and and operation is done
// if output is 1 then if otherwise else.
 
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}