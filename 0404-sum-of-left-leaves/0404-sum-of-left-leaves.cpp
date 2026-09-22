class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(root == NULL)
            return 0;

        int sum = 0;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty())
        {
            TreeNode* temp = st.top();
            st.pop();

            if(temp->left != NULL)
            {
                if(temp->left->left == NULL && temp->left->right == NULL)
                {
                    sum += temp->left->val;
                }

                st.push(temp->left);
            }

            if(temp->right != NULL)
            {
                st.push(temp->right);
            }
        }

        return sum;
    }
};