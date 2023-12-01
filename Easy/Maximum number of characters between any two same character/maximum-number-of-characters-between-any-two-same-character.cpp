//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxChars (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << maxChars (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int maxChars (string str)
{
    // your code here
    
    int res=-1;
    unordered_map<char,int> mp;
    for(int i=0;i<str.size();i++)
    {
        if(mp.find(str[i])==mp.end())
        mp[str[i]]=i;
        else 
        res=max(res,i-mp[str[i]]-1);
    }
    return res;
}