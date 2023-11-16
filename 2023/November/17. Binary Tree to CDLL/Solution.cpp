// Binary Tree to CDLL
// November 17, 2023
// C++ Code

class Solution
{
  public:
    Node* gaand = NULL;
    Node* head = gaand;
    Node* link(Node *root)
    {
        if(root==NULL){
            return NULL;
        }
        link(root->left);
        if(gaand==NULL){
            head=root;
        }
        else{
            gaand->right=root;
        }
        root->left=gaand;
        gaand=root;
        link(root->right);
        return root;
    }
    
    Node *bTreeToCList(Node *root)
    {
        if(root==NULL){
            return NULL;
        }
        link(root);
        gaand->right=head;
        gaand->right->left=gaand;
        return head;
    }
};
