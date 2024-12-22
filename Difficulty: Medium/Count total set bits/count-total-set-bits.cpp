//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
         int count = 0;
    int powerOf2 = 1;

    while (powerOf2 <= n) {
        int totalPairs = n / (2 * powerOf2);
        int remainder = n % (2 * powerOf2);

        // Each full pair contributes 'powerOf2' set bits
        count += totalPairs * powerOf2;

        // Add the set bits in the remainder
        count += max(0, remainder - powerOf2 + 1);

        powerOf2 *= 2; // Move to the next bit position
    }

    return count;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  
cout << "~" << "\n";
}
	  return 0;
}

// } Driver Code Ends