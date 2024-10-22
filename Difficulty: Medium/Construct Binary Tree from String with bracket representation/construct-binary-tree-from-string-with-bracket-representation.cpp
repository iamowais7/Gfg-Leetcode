//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *tree(string &str,int &start){
        if(start > str.length()){
            return nullptr;
        }
        
        int num = 0;
        bool negative = false;
        
        if(str[start] == '-'){
            negative = true;
            start++;
        }
        
        //num
        while(start < str.length() && isdigit(str[start])){
            num = num*10 + (str[start]-'0');
            start++;
        }
        
        if(negative){
            num = -num;
        }
        
        Node *root = new Node(num);
        
        if (start < str.length() && str[start] == '(') {
           start++;
           if (start < str.length() && str[start] == ')') {
             start++;  
             } 
        else {
            root->left = tree(str, start);   
            start++;  
            }
    }
        
        if(start < str.length() && str[start] == '('){
            start++;
            root->right = tree(str,start);
            start++;
        }
        
        return root;
    }
    
    Node *treeFromString(string str){
        int start = 0;
        return tree(str,start);
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends