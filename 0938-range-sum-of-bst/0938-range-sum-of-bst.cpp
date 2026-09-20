/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        TreeNode* Stack[100];
        int top=-1;

        top++;
        Stack[top]=root;
        int sum=0;
        while(top!=-1)
        {
            TreeNode* temp=Stack[top];
            top--;

            if(temp->val >=low && temp->val<=high)
            {
                sum=sum+temp->val;
            }

            if(temp->left!=NULL)
            {
                top++;
                Stack[top]=temp->left;
            }

             if(temp->right!=NULL)
            {
                top++;
                Stack[top]=temp->right;
            }
        }
        return sum;
    }
};