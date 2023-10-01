//{ Driver Code Starts
#include <iostream>
using namespace std;

void printPattern(string s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	printPattern(s);
	cout<<endl;
	
}
	
	return 0;
}
// } Driver Code Ends


/*method prints the given pattern in a single line */
void printPattern(string s)
{
   //Your code here
   //Your code here
   int n=s.size(),c=0;
   string s1="";
   for(int i=n/2;i<n;i++)
   {
       s1=s1+s[i];
       cout<<s1<<"$ ";
       if(i==n-1&&c==0)
       {
           i=-1;n=n/2;
           c++;
       }
   }
}
