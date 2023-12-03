// Brothers From Different Roots
// December 3, 2023
// C++ Codeclass Solution
{
public:
    void inorder(Node *root, vector<int> &in)
    {
        if(root) 
        {
            inorder(root->left, in);
            in.push_back(root->data);
            inorder(root->right, in);
        }
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int> in1, in2;
        inorder(root1, in1);
        inorder(root2, in2);
        
        int count = 0, i = 0, j = in2.size() - 1;
        
        while(i < in1.size() and j >= 0) 
        {
            int sum = in1[i] + in2[j];
            if(sum == x) 
            {
                count++;
                i++, j--;
            }
            else if(sum > x)
                j--;
            else
                i++;
        }
        
        return count;
    }
};

