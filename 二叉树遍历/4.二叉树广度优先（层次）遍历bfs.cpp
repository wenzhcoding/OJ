class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> q;//队列存放二叉树节点
        q.push(root);
        vector <int> result;
        while(!q.empty()){//打印跟节点，把左右子节点按顺序放入队列
            root = q.front();//更新子树根节点
            q.pop();
            if(root==NULL) continue;//节点指向为空，说明为叶子节点
            result.push_back(root->val);
            q.push(root->left);
            q.push(root->right);
        }
        return result;

    }
};