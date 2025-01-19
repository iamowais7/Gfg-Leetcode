//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
         int count0 = 0; // Count of '0's
    int count1 = 0; // Count of '1's
    int balancedCount = 0; // Number of balanced substrings

    for (char ch : str) {
        if (ch == '0') {
            count0++;
        } else if (ch == '1') {
            count1++;
        }

        // Check if counts are balanced
        if (count0 == count1) {
            balancedCount++;
        }
    }

    // If counts of '0's and '1's are not balanced in the entire string
    if (count0 != count1) {
        return -1;
    }

    return balancedCount;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends