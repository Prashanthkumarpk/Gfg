//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  
   string encoded = "";
  int count = 1;
  
  for(int i = 1; i <= src.size(); i++){
      if(src[i] == src[i-1] && i < src.size()){
          count++;
      } else {
          encoded += src[i-1] + to_string(count);
          count = 1;
      }
  }
  
  return encoded;
}     
 
