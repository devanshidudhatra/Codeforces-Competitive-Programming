#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    for(int i =0 ; i<n; i++){
        cout << "Enter element " << i+1 << " :" ;
        cin >> arr[i];
    }

    int start =0;
    int end = n;
    
    int target;
    cout << "Enter target : ";
    cin >> target;
    while(start <= end){
        int mid = (start+end)/2;
        if(mid>target){
            end = mid-1;
        }
        else if(mid<target){
            start = mid+1;
        }
        else if(mid == target){
            cout << "Found";
            break;
        }
    }
}