//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     long long isPrime(long long  n){
         if(n<2){
            return 0;
        }
        for(int i=2 ; i*i<=n ; i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
     }
    int isTwistedPrime(int N) {
        // code here
        long long r,s=0;
        long long t=N;
        while(N){
            r=N%10;
            s=s*10+r;
            N/=10;
        }
        
        return isPrime(t)&&isPrime(s);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isTwistedPrime(N) << "\n";
    }
}
// } Driver Code Ends