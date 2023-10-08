// Insert in a Sorted List
// October 8, 2023
// C++ Code

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr || data < head->data) {
            newNode->next = head;
            return newNode;
        }
        
        Node* current = head;
        while (current->next != nullptr && current->next->data < data) 
            current = current->next;
        
        newNode->next = current->next;
        current->next = newNode;
        return head;
    }
};
