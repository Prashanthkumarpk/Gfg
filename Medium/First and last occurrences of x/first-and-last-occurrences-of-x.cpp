//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        
        int l=0;
        int h=n-1;
        int mid;
        int leftmost = -1;
    int rightmost = -1;
        vector<int>v;
       
        
        
        while(l<=h)
        {
            mid=(l+h)/2;
            
            if(arr[mid]==x){
                leftmost = mid;
                h=mid-1;
            }
            
            if(x<arr[mid])h=mid-1;
            
            if(x>arr[mid])l=mid+1;
            
            
        }
        
        
        
        l=0;
        h=n-1;
        
        while(l<=h)
        {
            mid=(l+h)/2;
            
            if(arr[mid]==x){
              rightmost = mid;
                l=mid+1;
            }
            
            if(x<arr[mid])h=mid-1;
            
            if(x>arr[mid])l=mid+1;
            
            
        }
        
         v.push_back(leftmost);
    v.push_back(rightmost);
    return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends