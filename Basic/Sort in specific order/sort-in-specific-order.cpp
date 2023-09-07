//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        
        vector<long long> even,odd;
        
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)even.push_back(arr[i]);
            else odd.push_back(arr[i]);
            
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
            int j=0;
            for(int i=0;i<n;i++){
                if(i<odd.size()) arr[i]=odd[i];
                else arr[i]=even[j++];
                
            }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends