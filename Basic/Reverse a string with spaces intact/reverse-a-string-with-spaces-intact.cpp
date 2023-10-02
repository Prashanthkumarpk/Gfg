//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
            
            //code here.
            string str2(s);
            int start=0,end=s.length()-1;
            while(start<end)
            {
                if(str2[start]==' ')
                {
                    start++;continue;
                }
                if(str2[end]==' ') 
                {
                    end--;continue;
                }
                swap(str2[start++],str2[end--]);
            }
            return str2;
            
        }
      

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends