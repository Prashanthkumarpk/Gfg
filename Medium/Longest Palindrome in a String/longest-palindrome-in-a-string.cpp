//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
 public:
    string expand(string s, int left, int right) {
        while(left>=0 && right<s.size() && s[left]==s[right]) {
            left-- ;
            right++ ;
        }
        return s.substr(left+1, right-left-1) ;
    }
  
    string longestPalin (string S) {
        // code here
        string ans ;
        for(int i=0; i<S.size(); i++) {
            string odd = expand(S, i, i) ;
            string even = expand(S, i, i+1) ;
            
            if(ans.size()<odd.size()) ans = odd ;
            if(ans.size()<even.size()) ans = even ;
            
        }
        return ans ;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends