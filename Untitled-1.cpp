//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

long maximumSumSubarray(int k, vector<int> &Arr , int N){
        int i=0;
        int j=0;
        long sum =0;
        long maxi = 0;
        while(j<Arr.size()){
            if(j-i+1 < k){
                sum += Arr[j];
                j++;
            }
            else{
                sum +=Arr[j];
                maxi = max(maxi,sum);
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        cout << maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends