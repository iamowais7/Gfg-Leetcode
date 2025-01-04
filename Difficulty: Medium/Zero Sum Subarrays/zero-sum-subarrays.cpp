//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
     unordered_map<int, int> prefixSumFreq;
    int sum = 0;
    int count = 0;

    for (int num : arr) {
        sum += num;

        if (sum == 0) {
            count++;
        }

        if (prefixSumFreq.find(sum) != prefixSumFreq.end()) {
            count += prefixSumFreq[sum];
        }

        prefixSumFreq[sum]++;
    }

    return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends