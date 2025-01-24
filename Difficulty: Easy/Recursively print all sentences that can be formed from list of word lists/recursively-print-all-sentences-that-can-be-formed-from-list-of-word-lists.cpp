//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
   void generateSentences(vector<vector<string>>& list, vector<string>& current, int index, vector<vector<string>>& result) {
    // Base case: If index reaches the size of the list, we have formed a sentence.
    if (index == list.size()) {
        result.push_back(current);
        return;
    }
    
    // Recursive case: Iterate through all words in the current sublist.
    for (const string& word : list[index]) {
        current.push_back(word); // Add the current word to the sentence.
        generateSentences(list, current, index + 1, result); // Recur for the next list.
        current.pop_back(); // Backtrack to explore other possibilities.
    }
}

// Function to start the process of generating sentences.
vector<vector<string>> sentences(vector<vector<string>>& list) {
    vector<vector<string>> result; // To store the final sentences.
    vector<string> current; // To store the current sentence being formed.
    generateSentences(list, current, 0, result); // Start the recursion.
    return result;
}
};


//{ Driver Code Starts.
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<vector<string>>list(m, vector<string>(n));
	    for(int i = 0 ; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin >> list[i][j];
	        }
	    }
	    Solution ob;
	    vector<vector<string>>ans = ob.sentences(list);
	    for(auto it : ans){
	        for(auto it1 : it){
	            cout << it1 << " ";
	        }
	        cout << endl;
	    }
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends