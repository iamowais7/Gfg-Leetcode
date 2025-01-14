//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        pair<int,int> ans;
        int min = arr[0];
        int max = arr[0];
        
        for(int i = 1; i < arr.size() ; i++){
            if(min > arr[i]){
                min = arr[i];
            }
            if(max < arr[i]){
                max = arr[i];
            }
        }
        ans.first = min;
        ans.second = max;
        
        return ans;
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
        Solution ob;
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends