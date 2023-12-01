//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++



class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        
        map<char,int>mp;
        mp.insert(make_pair('I',1));
        mp.insert(make_pair('V',5));
        mp.insert(make_pair('X',10));
        mp.insert(make_pair('L',50));
        mp.insert(make_pair('C',100));
        mp.insert(make_pair('D',500));
        mp.insert(make_pair('M',1000));
        
        int res=mp[str[str.size()-1]];
        
        for(int i=str.size()-2;i>=0;i--){
            if(mp[str[i]]<mp[str[i+1]]) res-=mp[str[i]];
            else res+=mp[str[i]];
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends