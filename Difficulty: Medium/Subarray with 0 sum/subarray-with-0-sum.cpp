//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends



class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
      set<int> cum_sum_set ;
     int cum_sum = 0;
      
      for(int i = 0 ; i < n ; ++i){
          cum_sum += arr[i];
          
            if (cum_sum == 0 || cum_sum_set.find(cum_sum) != cum_sum_set.end()) {
            return true;
        }
        cum_sum_set.insert(cum_sum);
    }
    return false;
      
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends