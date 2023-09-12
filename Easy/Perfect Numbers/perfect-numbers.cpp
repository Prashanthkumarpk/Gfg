//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        
        // int t=N;
        // int s=0;
        
        // for(int i=1;i<N;i++){
        //     if(N%i==0)s+=i;
        // }
        
        // if(s==N)return 1;
        
        // return 0;
        
             if(N==1)return 0;
        long long sum=1;
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0){
                sum+=i;
                sum+=(N/i);
            }
        }
        if(sum!=N)return false;
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends