//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int count =0;
            
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='.')count++;
            }
            
            if(count!=3)return 0;
            
            unordered_map<string,int>mp;
            
            for(int i=0;i<256;i++)mp[to_string(i)]++;
            
            count =0;
            
            string t="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='.')t+=s[i];
                
                else{
                    if(mp.count(t)!=0)count++;
                    t="";
                }
            }
            
            
            if(mp.count(t)!=0)count++;
            if(count==4)return 1;
            
            return 0;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends