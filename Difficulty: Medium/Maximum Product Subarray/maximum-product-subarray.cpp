//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    // Function to find maximum product subarray
    long long maxProduct(vector<int> &arr) {
        int n = arr.size();
       long long max_product = arr[0];
    long long min_product = arr[0];  // To track the minimum product in case of negative numbers
    long long result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            // Swap max and min when a negative number is encountered
            swap(max_product, min_product);
        }
        
        // Calculate max and min product ending at the current element
        max_product = max((long long)arr[i], max_product * arr[i]);
        min_product = min((long long)arr[i], min_product * arr[i]);

        // Update result to store the maximum product found so far
        result = max(result, max_product);
    }

    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends