//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countSquares(int n) {
        int count = 0;
        int start = 1;
        int end = n-1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if ((long long)mid*mid < n) {
            count = mid; 
            start = mid + 1; 
        } else {
            end = mid - 1; 
        }
        }
        return count;
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
        cout << ob.countSquares(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends