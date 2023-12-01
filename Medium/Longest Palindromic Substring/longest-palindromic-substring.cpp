//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:


    string expand(string s, int left, int right) {
        while(left>=0 && right<s.size() && s[left]==s[right]) {
            left-- ;
            right++ ;
        }
        return s.substr(left+1, right-left-1) ;
    }
    
    
    string longestPalindrome(string S){
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







  
    // string longestPalin (string S) {
    //     // code here
       
    // }

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends