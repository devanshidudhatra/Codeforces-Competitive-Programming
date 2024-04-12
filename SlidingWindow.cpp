// it is also called 2 pointers
// i,j are used
// Array = {1,2,3,4,5}
// Target = 5
// IF there exists a pair that sums to target
// in this que we use 2 pointer

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int target = 6;
    int i=0;
    int j=5;
    int count =0;
    while(i<j){
        if((arr[j] - arr[i]) > target){
            j--;
        }
        else if((arr[j] - arr[i]) < target){
            i++;
        }
        else{
            j--;
            count++;
        }
    }
    cout << count;
}