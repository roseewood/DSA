#include <iostream>
using namespace std;

// Node structure to represent each chest
struct Node {
    int data;      // Coin value
    Node* next;    // Pointer to the next node (chest)
    
    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage the list and insert at the beginning
class LinkedList {
public:
    Node* head;  // Head of the list (the first node)

    // Constructor to initialize the linked list
    LinkedList() {
        head = nullptr;  // Initially, the list is empty
    }

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);  // Create a new node
        newNode->next = head;             // Link the new node to the current head
        head = newNode;                   // Make the new node the head of the list
    }

    // Function to find the maximum value in the linked list
    int findMax() {
        if (head == nullptr) {
            cout << "The list is empty!" << endl;
            return -1;  // Return an error if the list is empty
        }
        
        int maxVal = head->data;  // Start with the head's data as the maximum
        
        Node* current = head;  // Start from the head node
        
        // Traverse the list to find the maximum value
        while (current != nullptr) {
            if (current->data > maxVal) {
                maxVal = current->data;  // Update max value if we find a larger value
            }
            current = current->next;  // Move to the next node
        }
        
        return maxVal;  // Return the maximum value found
    }
};

int main() {
    LinkedList list;
    int n, value;

    // Input the size of the list (number of chests)
    cout << "Enter the number of chests: ";
    cin >> n;
    
    // Input the coin values and insert them into the list at the beginning
    cout << "Enter the values of the coins (one by one):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insertAtBeginning(value);  // Insert at the beginning
    }
    
    // Find and print the maximum coin value
    int maxCoinValue = list.findMax();
    cout << "The maximum coin value is: " << maxCoinValue << endl;

    return 0;
}
