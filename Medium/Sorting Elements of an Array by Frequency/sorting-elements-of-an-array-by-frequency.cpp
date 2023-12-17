//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        
        vector<int>v;
        
         map<int,int>mp;
         for(int i=0;i<n;i++)mp[arr[i]]++;
         
         vector<pair<int,int>>p(mp.begin(),mp.end());
         
        //  reverse(mp.begin(),mp.end());
        
        sort(p.begin(),p.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second==b.second)return a.first<b.first;
            
            return a.second>b.second;
        });
         
         for(auto it = p.begin(); it != p.end(); ++it){
             for(int i=1;i<=it->second;i++)v.push_back(it->first);
         }
         
         return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends