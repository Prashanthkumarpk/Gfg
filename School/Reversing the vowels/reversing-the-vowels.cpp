//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
       bool isVow(char c) {
            return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
        }
    
        string modify (string s) {
            for(int i = 0, j = s.size() - 1; i < j;) {
                if(isVow(s[i]) and isVow(s[j])) swap(s[i++], s[j--]);
                else if(isVow(s[i])) --j;
                else if(isVow(s[j])) ++i;
                else ++i, --j;
            }
            
            return s;
}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends