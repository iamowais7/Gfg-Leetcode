//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        vector<int> ans;
        
        int p = arr1.size();
        int q = arr2.size();
        int r = arr3.size();
        
       int i =0 , j = 0 , k =0;
        
        while ( (i < p) && (j < q) && (k <r) ){
           if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            
            // Move all pointers to skip duplicates
            int value = arr1[i];
            while (i < p && arr1[i] == value) i++;
            while (j < q && arr2[j] == value) j++;
            while (k < r && arr3[k] == value) k++;
        } 
      
        else if (arr1[i] < arr2[j]) {
            int value = arr1[i];
            while (i < p && arr1[i] == value) i++; 
        } 
        else if (arr2[j] < arr3[k]) {
            int value = arr2[j];
            while (j < q && arr2[j] == value) j++; 
        } 
        else {
            int value = arr3[k];
            while (k < r && arr3[k] == value) k++; 
        }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends