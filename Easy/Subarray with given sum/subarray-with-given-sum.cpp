//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        
        int l=0,r=0;
        long long int res=0;
        
        while(r<n){
            res+=arr[r];
            
            while(res>s&&l<r){
                res-=arr[l];
                l++;
            }
            
            if(res==s) return {l+1,r+1};
            
            r++;
        }
        
        return {-1};
    }
    
    //   int start=0,end=0;
        
        
    //     long long int sum=0;
    //     while(end<n)
    //     {
    //         sum+=arr[end];
            
    //         while(sum>s && start<end)
    //         {
    //             sum-=arr[start];
    //             start++;
    //         }
            
    //         if(sum==s)
    //         {
    //             return {start+1,end+1};
    //         }
            
    //         end++;
            
    //     }
        
    //     return {-1};
    // }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends