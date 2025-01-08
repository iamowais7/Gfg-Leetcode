//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        vector<int> ans;
        
        for(int i = 0; i < a.size();i++){
            ans.push_back(a[i]);
        }
        
        for(int i = 0; i < b.size();i++){
            ans.push_back(b[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        int s = 0;
        int e = ans.size()-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(mid == k-1){
                return ans[mid];
            }
            if(mid < k-1){
                s++;
            }
            else{
                e--;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends