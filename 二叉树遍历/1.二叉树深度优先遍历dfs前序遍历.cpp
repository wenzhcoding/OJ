//深度优先遍历 借助栈  先入右子树后入左子树  
void main(Tree* root)
{
	Stack<Tree*> nodeStack;
	vector<int> result;
	nodeStack.push(root);
	while(!nodeStack.empty())
	{
		root=nodeStack.top();//取栈顶，先左后右
		result.push_back(root->val);
		nodeStack.pop();
		if(root->rChild)
		{
			nodeStack.push(root->rChild);//先放右孩子
		}
		if(root->lChild)
		{
			nodeStack.push(root->lChild);//后放左孩子
		}
		
	}
//------------------------------------------------------------------------------

void preOrder(BinTree *root){
	stack<BinTree *>s;
	BinTree *p=root;
	while(p!=NULL||!s.empty()){
		while(p!=NULL){
			cout<<p->data<<" ";
			s.push(p);
			p=p->lchild;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			p=p->rchild;
		}
 
	}
