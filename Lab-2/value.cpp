#include <iostream>
using namespace std;

// Node structure to represent each locker (node in the linked list)
struct Node {
    int data;      // The secret code in the locker
    Node* next;    // Pointer to the next locker (node)
    
    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage the list and insert at the beginning
class LinkedList {
public:
    Node* head;  // Head of the list (the first locker)

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

    // Function to find the Nth node from the end of the list
    int findNthFromEnd(int N) {
        if (head == nullptr) {
            cout << "The list is empty!" << endl;
            return -1;  // Return an error if the list is empty
        }

        Node* first = head;
        Node* second = head;

        // Move the first pointer N steps ahead
        for (int i = 0; i < N; i++) {
            if (first == nullptr) {
                // N is greater than the length of the list
                return -1;
            }
            first = first->next;
        }

        // Move both first and second pointers one step at a time
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // When first reaches the end, second will be at the Nth node from the end
        return second->data;
    }
};

int main() {
    LinkedList list;
    int n, value, N;

    // Input the size of the list (number of lockers)
    cout << "Enter the number of lockers: ";
    cin >> n;
    
    // Input the secret codes and insert them into the list at the beginning
    cout << "Enter the secret codes of the lockers (one by one):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insertAtBeginning(value);  // Insert at the beginning
    }
    
    // Input the Nth position to find from the end
    cout << "Enter the position (N) from the end to find the locker: ";
    cin >> N;
    
    // Find and print the Nth locker (node) from the end
    int result = list.findNthFromEnd(N);
    if (result == -1) {
        cout << "Invalid position!" << endl;
    } else {
        cout << "The secret code of the " << N << "th locker from the end is: " << result << endl;
    }

    return 0;
}
