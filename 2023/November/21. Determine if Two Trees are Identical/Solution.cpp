// Determine if Two Trees are Identical
//November 21, 2023
// C++ Code

class Solution
{
    public:
    //Function to check if two trees are identical.
    int f=0;
    void check(Node *r1,Node *r2)
    {
        if(r1!=NULL and r2!=NULL)
        {
            check(r1->left,r2->left);
            if(r1->data!=r2->data)
            {
                f=1;
                return;
            }
            check(r1->right,r2->right);
        }
        if((r1==NULL and r2!=NULL)||(r2==NULL and r1!=NULL))
        {
            f=1;
        }
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        check(r1,r2);
        if(r1->data!=r2->data)
        {
            return false;
        }
        return f==0?true:false; 

    }
};
