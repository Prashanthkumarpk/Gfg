//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
         // Your code here
        vector<pair<int,int>> p;
        for(int i=0;i<N;i++){
            p.push_back( make_pair(A[i],i) ); 
        }
        sort(p.begin(),p.end());
        int a[N];
        int j=0;
        for(auto it:p){
            a[j]=it.second;
            j++;
        }
        int min=a[0];
        int dif=INT_MIN;
        for(int i=1;i<N;i++){
            if(min>a[i]){
                min=a[i];
            }
            dif=max(dif,a[i]-min);
        }
        return dif;
        
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends