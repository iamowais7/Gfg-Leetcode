//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int duplicate = -1 , missing = -1;
        
        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i] == arr[i+1]){
                duplicate = arr[i];
            }
            else if (arr[i + 1] != arr[i] + 1) {
            missing = arr[i] + 1; 
        }
        }
        
        if (arr[0] != 1) {
        missing = 1; 
    } else if (missing == -1) {
        missing = n; 
    }
        return {duplicate,missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends