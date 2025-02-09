//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int firstOccurence(vector<int>& arr, int x) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            ans = mid;
            e = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return ans;
}

int lastOccurence(vector<int>& arr, int x) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x) {
            ans = mid;
            s = mid + 1; // Continue searching in the right half
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return ans;
}

vector<int> find(vector<int>& arr, int x) {
    int first = firstOccurence(arr, x);
    int last = lastOccurence(arr, x);
    
    return {first, last};
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends