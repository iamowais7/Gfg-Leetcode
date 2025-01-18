//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
          unordered_map<string, int> frequency;
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    int maxFreq = 0, secondMaxFreq = 0;
    string maxString = "", secondMaxString = "";

    for (const auto& entry : frequency) {
        if (entry.second > maxFreq) {
            secondMaxFreq = maxFreq;
            secondMaxString = maxString;

            maxFreq = entry.second;
            maxString = entry.first;
        } else if (entry.second > secondMaxFreq) {
            secondMaxFreq = entry.second;
            secondMaxString = entry.first;
        }
    }

    return secondMaxString;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends