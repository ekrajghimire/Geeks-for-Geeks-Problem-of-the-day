// Inorder Traversal and BST
// December 2, 2023
// C++ Code

class Solution {
    public:
    int isRepresentingBST(int arr[], int n) {
        for(int i = 1; i < n; i++)
            if(arr[i - 1] > arr[i])
                return 0;
                
        return 1;
    }
};
