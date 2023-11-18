// Reverse a Doubly Linked List
// November 18, 2023
// C++ Code

class Solution
{
    public:
     Node* reverseDLL(Node * head)
    {
        Node *curr = head;
        Node *next = NULL;
        Node *prev = NULL;
        while(curr)
        {
            next = curr->next;
            curr->prev = next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    
    }
    
};
