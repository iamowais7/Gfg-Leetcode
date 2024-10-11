//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<algorithm>
class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
    ans.push_back(1);  // Start with factorial of 1.
    
    // Multiply from 2 to N
    for (int x = 2; x <= N; x++) {
        int carry = 0;
        
        // Multiply each digit in the result by x
        for (int i = 0; i < ans.size(); i++) {
            int product = ans[i] * x + carry;
            ans[i] = product % 10;  // Store the last digit in the current position
            carry = product / 10;   // The remaining part is the carry
        }
        
        // Add remaining carry digits to the vector
        while (carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    // Reverse the digits because they're stored in reverse order
    std::reverse(ans.begin(), ans.end());
    return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends