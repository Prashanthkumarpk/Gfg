//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    
    int lmax[n],rmin[n];
    lmax[0]=arr[0];
    rmin[n-1]=arr[n-1];
    
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
        rmin[n-i-1]=min(rmin[n-i],arr[n-i-1]);
        
    }
    
    for(int i=1;i<n-1;i++){
        if(lmax[i]==rmin[i]&&lmax[i]==arr[i]) return arr[i];
    }
    
    return -1;
}