//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
       if (n == 0) return 0;
    
    int low = 0, high = 5 * n, ans = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = 0, temp = mid;
        
        while (temp > 0) {
            count += temp / 5;
            temp /= 5;
        }
        
        if (count >= n) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    
    return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    
cout << "~" << "\n";
}
return 0;
}
// } Driver Code Ends