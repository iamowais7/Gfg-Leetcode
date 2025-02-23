//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Structure for the linked list node
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to print nodes in a given circular linked list
void printList(struct Node *head) {
    if (head != NULL) {
        struct Node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    } else {
        cout << "empty" << endl;
    }
    cout << endl;
}


// } Driver Code Ends
class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
         if (!head || head->next == head) return head; 
    Node *prev = NULL, *curr = head, *nextNode;
    
    do {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    } while (curr != head);

    head->next = prev;
    head = prev;
    
    return head;
    }

    Node* deleteNode(Node* head, int key) {
        if (!head) return NULL;

    Node *curr = head, *prev = NULL;

    // Case 1: Deleting the head node
    if (head->data == key) {
        if (head->next == head) {
            delete head;
            return NULL;
        }

        // Find the last node
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }

    // Case 2: Deleting a node other than the head
    do {
        prev = curr;
        curr = curr->next;
        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return head;
        }
    } while (curr != head);

    return head; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Reading input into a vector
        while (ss >> number) {
            arr.push_back(number);
        }

        int key;
        cin >> key;
        cin.ignore();

        // Creating the circular linked list
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head; // Make the list circular

        Solution ob;

        // Delete the node with the given key
        head = ob.deleteNode(head, key);

        // Reverse the circular linked list
        head = ob.reverse(head);

        // Print the modified list
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends