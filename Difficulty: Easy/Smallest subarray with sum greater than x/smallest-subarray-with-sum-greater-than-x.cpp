//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int start = 0;
        int end = 0;
        int min_length = INT_MAX;
        int n = arr.size();
        int current_sum = 0;
        
        while(end < n){
            if(current_sum <= x && end < n){
                current_sum +=arr[end++];
            }
        
        
        while(current_sum > x && start < n){
            min_length = min(min_length , end-start);
            current_sum -=arr[start++];
        }
        }
        
        return (min_length == INT_MAX) ? 0 :min_length;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends