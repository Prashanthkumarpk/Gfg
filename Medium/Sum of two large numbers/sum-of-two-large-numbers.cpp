//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
      // Before proceeding further, make sure length
        // of Y is larger.
        if (X.length() > Y.length()) swap(X, Y);

        // Take an empty string for storing result
        string str = "";

        // Calculate length of both string
        int n1 = X.length(), n2 = Y.length();
        int diff = n2 - n1;

        // Initially take carry zero
        int carry = 0;

        // Traverse from end of both strings
        for (int i = n1 - 1; i >= 0; i--) {
            // Do school mathematics, compute sum of
            // current digits and carry
            int sum = ((X[i] - '0') + (Y[i + diff] - '0') + carry);
            str.push_back(sum % 10 + '0');
            carry = sum / 10;
        }

        // Add remaining digits of Y[]
        for (int i = n2 - n1 - 1; i >= 0; i--) {
            int sum = ((Y[i] - '0') + carry);
            str.push_back(sum % 10 + '0');
            carry = sum / 10;
        }

        // Add remaining carry
        if (carry) str.push_back(carry + '0');

        // reverse resultant string
        reverse(str.begin(), str.end());

        int i = 0, n = str.size();
        while (i < n and str[i] == '0') i++;

        if (i == n) return "0";

        return str.substr(i, (int)str.size() - i + 1);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends