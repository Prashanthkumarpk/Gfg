//{ Driver Code Starts
//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	// Complete the function
    	
    	for (int i=0;i<n-1;i++){
    	    if(arr[i+1]!=0&&arr[i]==arr[i+1]){
    	        arr[i]+=arr[i+1];
    	        arr[i+1]=0;
    	    }
    	}
    	
    	int r=0;
    	for(int i=0;i<n;i++){
    	    if(arr[i]!=0){
    	        swap(arr[i],arr[r]);
    	        r++;
    	    }
    	}
    }
}; 


//{ Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 

// } Driver Code Ends