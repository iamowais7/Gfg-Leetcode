//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
     long long count = 0;

    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            long long current_sum = arr[i] + arr[left] + arr[right];

            if (current_sum < sum) {

                count += (right - left);
                left++; 
            } else {
                right--; 
            }
        }
    }

    return count;  
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum;
        cin >> n >> sum;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countTriplets(n, sum, arr);

        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends