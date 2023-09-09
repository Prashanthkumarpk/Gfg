//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            
               int count=0;
           
           unordered_map<char,long long>mp;
           mp[S[0]]++;
           for(int i=1;i<S.length();i++){
              if(S[i]!=S[i-1])   // given in the question 
               mp[S[i]]++;
           }
           for(auto x:mp){
               if(x.second==N){
                   count++;
               }
           }
           return count;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends