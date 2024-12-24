//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:  
    int findPosition(int N) {
      int count = 0;
      int position = 0;
      int index = 1;
      
      while(N != 0){
          if(N&1){
            count++;
            position = index;
          }
          N = N>>1;
          index++;
      }
      
      if(count == 1){
         return position; 
      }
      
      return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends