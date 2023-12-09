//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // Before proceeding further, make sure length
	    // of b is larger.
	    if (a.size() > b.size()) swap(a, b);

	    // Take an empty vector for storing result
	    vector<int> ans;

	    // Calculate length of both vector
	    int n = a.size(), m = b.size();

	    // Reverse both of vector
	    reverse(a.begin(), a.end());
	    reverse(b.begin(), b.end());

	    int carry = 0;
	    for (int i = 0; i < n; i++) {
	        // Do school mathematics, compute sum of
	        // current digits and carry
	        int sum = (a[i] + b[i] + carry);
	        ans.push_back(sum % 10);

	        // Calculate carry for next step
	        carry = sum / 10;
	    }

	    // Add remaining digits of larger number
	    for (int i = n; i < m; i++) {
	        int sum = (b[i] + carry);
	        ans.push_back(sum % 10);
	        carry = sum / 10;
	    }

	    // Add remaining carry
	    if (carry) ans.push_back(carry);

	    // reverse resultant vector
	    reverse(ans.begin(), ans.end());

	    return ans;
	}

};

        // std::string s = "", t = "";

        // for (auto x : a)
        //     s += std::to_string(x); // Convert int to string

        // for (auto y : b)
        //     t += std::to_string(y); // Convert int to string

        // int res = std::stoi(s) + std::stoi(t); // Convert string to int
        
        // string ans=to_string(res);
        
        // vector<int>sol;
        
        // for(int i=0;i<ans.length();i++){
        //     sol.push_back(ans[i]-'0');
        // }

        // return sol;

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends