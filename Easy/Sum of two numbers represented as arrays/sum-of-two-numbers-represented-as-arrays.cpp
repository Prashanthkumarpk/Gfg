//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    std::vector<int> findSum(std::vector<int>& a, std::vector<int>& b) {
        // code here
        
          int n = a.size();
        int m = b.size();
        int carry = 0;
        std::vector<int> result(max(n, m) + 1); // +1 for possible carry from the last addition

        // Start from the end of both vectors
        int i = n - 1;
        int j = m - 1;
        int k = result.size() - 1;

        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i];
                i--;
            }
            if (j >= 0) {
                sum += b[j];
                j--;
            }

            // If sum is 10 or more, set carry
            carry = sum / 10;

            // Store the last digit of sum in the result
            result[k] = sum % 10;
            k--;
        }

        // If there is a carry left
        if (carry > 0) {
            result[0] = carry;
        } else {
            // If no carry is left, remove the first element
            result.erase(result.begin());
        }

        return result;
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