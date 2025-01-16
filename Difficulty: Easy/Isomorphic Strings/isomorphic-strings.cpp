//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

         if (s1.length() != s2.length()) return false;

    // Maps to store character mappings from s1 -> s2 and s2 -> s1
    unordered_map<char, char> map1, map2;

    for (int i = 0; i < s1.length(); ++i) {
        char c1 = s1[i];
        char c2 = s2[i];

        // Check if there is a mapping inconsistency in s1 -> s2
        if (map1.count(c1) && map1[c1] != c2) return false;

        // Check if there is a mapping inconsistency in s2 -> s1
        if (map2.count(c2) && map2[c2] != c1) return false;

        // Create or update the mappings
        map1[c1] = c2;
        map2[c2] = c1;
    }

    // If no contradictions were found, the strings are isomorphic
    return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends