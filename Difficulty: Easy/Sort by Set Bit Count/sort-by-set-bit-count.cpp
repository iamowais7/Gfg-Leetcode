//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
     int countSetBits(int num) {
        return __builtin_popcount(num); // Built-in function to count set bits
    }

    void sortBySetBitCount(int arr[], int n) {
        // Create a vector of pairs to store array elements and their indices
        vector<pair<int, int>> arrWithIndex;

        // Fill the vector with element and index pairs
        for (int i = 0; i < n; ++i) {
            arrWithIndex.push_back({arr[i], i});
        }

        // Perform stable sort using a lambda function as comparator
        stable_sort(arrWithIndex.begin(), arrWithIndex.end(),
            [this](const pair<int, int>& a, const pair<int, int>& b) {
                int countA = countSetBits(a.first);
                int countB = countSetBits(b.first);

                // Sort primarily by set bits count, and maintain stable order if counts are equal
                return (countA > countB) || (countA == countB && a.second < b.second);
            });

        // Update the original array with sorted values
        for (int i = 0; i < n; ++i) {
            arr[i] = arrWithIndex[i].first;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends