//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
       
         
        int start=0;
        int end;
        
        for(end=0;end<s.size();end++)
        {
            
            if(s[end]=='.')
            {
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        
        reverse(s.begin()+start,s.begin()+end);
        // reverse(s.begin(),s.end());
        
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends