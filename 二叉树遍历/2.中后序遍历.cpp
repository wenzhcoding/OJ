void inOrder(BinTree *root){
	stack<BinTree*>s;
	BinTree *p=root;
	vector<int> result;
	while(p!=NULL||!s.empty()){
		while(p!=NULL){
			s.push(p);
			p=p->lchild;//找到最左子节点
		}
		if(!s.empty()){
			p=s.top();//更新子节点
			result.push_back(p->val);
			s.pop();
			p=p->rchild;//左节点访问完了再访问右节点
		}
	}
}

void inorderTraversal(TreeNode *root, vector<int> &path)
{
    stack<TreeNode *> s;
    TreeNode *p = root;
    while(p != NULL || !s.empty())
    {
        while(p != NULL)
        {
            s.push(p);
            p = p->left;
        }
        if(!s.empty())
        {
            p = s.top();
            path.push_back(p->val);
            s.pop();
            p = p->right;
        }
    }
}


void postorderTraversal(TreeNode *root, vector<int> &path)
{
    stack<TempNode *> s;
    TreeNode *p = root;
    TempNode *temp;
    while(p != NULL || !s.empty())
    {
        while(p != NULL) //沿左子树一直往下搜索，直至出现没有左子树的结点
        {
            TreeNode *tempNode = new TreeNode;
            tempNode->btnode = p;
            tempNode->isFirst = true;
            s.push(tempNode);
            p = p->left;
        }
        if(!s.empty())
        {
            temp = s.top();
            s.pop();
            if(temp->isFirst == true)   //表示是第一次出现在栈顶
            {
                temp->isFirst = false;
                s.push(temp);
                p = temp->btnode->right;
            }
            else  //第二次出现在栈顶
            {
                path.push_back(temp->btnode->val);
                p = NULL;
            }
        }
    }
}
