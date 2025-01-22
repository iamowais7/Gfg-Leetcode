//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
         vector<int> positives;
    vector<int> negatives;

    // Separate positive and negative numbers
    for (int num : arr) {
        if (num >= 0) {
            positives.push_back(num);
        } else {
            negatives.push_back(num);
        }
    }

    // Interleave positives and negatives
    int i = 0, j = 0, k = 0;
    while (i < positives.size() && j < negatives.size()) {
        if (k % 2 == 0) {
            arr[k++] = positives[i++];
        } else {
            arr[k++] = negatives[j++];
        }
    }

    // Add remaining positives
    while (i < positives.size()) {
        arr[k++] = positives[i++];
    }

    // Add remaining negatives
    while (j < negatives.size()) {
        arr[k++] = negatives[j++];
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends