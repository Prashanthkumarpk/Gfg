//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	
	    // code here
	    
	   vector<int> p, a;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            p.push_back(arr[i]);
        } else {
            a.push_back(arr[i]);
        }
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < p.size() && k < a.size()) {
        if (i % 2 == 0) {
            arr[i] = p[j];
            j++;
        } else {
            arr[i] = a[k];
            k++;
        }
        i++;
    }

    while (j < p.size()) {
        arr[i] = p[j];
        i++;
        j++;
    }

    while (k < a.size()) {
        arr[i] = a[k];
        i++;
        k++;
    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends