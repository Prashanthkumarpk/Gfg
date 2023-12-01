//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        cout<<kPangram(str,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool kPangram(string str, int k)
{
    // code here 
      int hash[26]={0}, strsize=str.size(), Notexisting=0, extra=0;

    for(int i=0 ; i<strsize ; i++)

      {

          hash[str[i]-'a']++;

      }

      for(int i=0 ; i<26 ; i++)

      {

          if(hash[i]==0) Notexisting++;

          else if(hash[i]>1) extra+=hash[i]-1;

      }

    if(extra>=Notexisting && k>=Notexisting ) return 1;

    else return 0;
}