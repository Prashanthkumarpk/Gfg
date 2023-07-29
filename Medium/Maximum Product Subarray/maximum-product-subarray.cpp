//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    
	    
	    // code here
	    
	     // code here
	    long long c=INT_MIN;
	    long long s=1;
	    for(int i=0;i<n;i++){
	        s*=arr[i];
	        c=max(c,s);
	        if (s==0){
	            
	        s=1;}
	    }
	    s=1;
	    for(int i=n-1;i>=0;i--){
	        s*=arr[i];
	        c=max(c,s);
	        if(s==0){
	            s=1;
	    }}
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends