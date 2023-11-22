//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution{   
public:
string numtoword(long n,string s){
        string one[]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
        string tens[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
        string str="";
        if(n>19){
            str+=tens[n/10]+one[n%10];
        }else{
            str+=one[n];
        }
        if(n!=0){
            str+=s;
        }
        return str;
    }
    string convertToWords(long n) {
        // code here
        string ans="";
        ans+=numtoword((int)(n/10000000),"crore ");
        ans+=numtoword((int)((n/100000)%100),"lakh ");
        ans+=numtoword((int)((n/1000)%100),"thousand ");
        ans+=numtoword((int)((n/100)%10),"hundred ");
        if(n>100 && n%100>0){
            ans+="and ";
        }
        ans+=numtoword((int)(n%100),"");
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends