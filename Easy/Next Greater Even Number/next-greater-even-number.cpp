//{ Driver Code Starts
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long getNextEven(string x)
    {
        // Your code goes here  
        
        string E = x;
    while(next_permutation(E.begin(), E.end())){
        if((E.back()-'0')%2 == 0)
            return stoll(E);
    }
    return -1;
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin >> t;
	while(t--){
    	string x;
    	cin >> x;
    	Solution ob;
        cout<< ob.getNextEven(x) <<endl;
	}
	
	return 0;
}
// } Driver Code Ends