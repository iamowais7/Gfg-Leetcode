//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
      vector<vector<int>> result ;
      sort(arr.begin(),arr.end());
      int n = arr.size();
      
      for(int i = 0 ;i < n-3 ; i++){
          if(i > 0 && arr[i] == arr[i-1]) continue;
          
          for(int j = i+1 ; j < n-2 ; j++){
              if(j> i+1 && arr[j] == arr[j-1]) continue;
              
              int left = j+1;
              int right = n-1;
              
              while(left < right){
                  long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];
                  
                  if(sum == k){
                      result.push_back({arr[i],arr[j],arr[left],arr[right]});
                  
                  while(left < right && arr[left] == arr[left+1]) left++;
                  while(left < right && arr[right] == arr[right-1]) right--;
                  
                  left++;
                  right--;
                  }
                  else if(sum < k){
                      left++;
                  }
                  else{
                      right--;
                  }
              }
          }
      }
      return result;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(arr, d);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << endl;
        }
        if (ans.empty()) {
            cout << -1 << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends