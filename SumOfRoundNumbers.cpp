#include<bits/stdc++.h>
using namespace std;
int main(){

      int n,len;
      cin>>n;

      while(n--)
      {
       int i,x=0;
       string s;
       cin>>s;
       len=s.length();

       for(i=0;i<len;i++)
       {
           if(s[i]!='0')
            x++;
       }
        cout<<x<<endl;

     for(i=0;i<len;i++)
     {
         if(s[i]!='0'){
         cout<<s[i];
         for(int j=0;j<len-i-1;j++)
         {
             cout<<0;
         }
         cout<<" ";
     }
      }
      cout << endl;
      }

return 0;
}
