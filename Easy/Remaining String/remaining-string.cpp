//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    
	    int i=0;
	    
	    map<char,int>mp;
	    
	    for(int i=0;i<S.size();i++)mp[S[i]]++;
	    
	    if(  mp[ch]<count  or mp.find(ch)==mp.end())return "Empty string";
	    
	    while(count){
	        if(S[i]==ch)count--;
	        i++;
	    }
	    
	    if(S.substr(i,S.size()).size()>=1)
	    return S.substr(i,S.size());
	    
	    return "Empty string";
	}
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends