//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:


     int isPrime(int n){
         int c=0;
         if (n==0||n==1)return 0;
         for(int i=1;i<=n;i++){
             if(n%i==0)c++;
         }
        if(c==2) return 1;
        return 0;
     }
    int primeSum(int N){
        // code here
        int s=0,r;
        while(N){
            r=N%10;
            if(isPrime(r)==1)s+=r;
            N/=10;
        }
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends