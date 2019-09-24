
//前序遍历
template<class Type>
void BSTree<Type>::printData_NLR(const BinaryNode<Type> *startNode){
    if(startNode == NULL){
        return;
    }else{
        cout << startNode->data << " ";
        printData_NLR(startNode->left);
        printData_NLR(startNode->right);
    }
}
 
 
//中序遍历
template<class Type>
void BSTree<Type>::printData_LNR(const BinaryNode<Type> *startNode){
    if(startNode == NULL){
        return;
    }else{
        printData_LNR(startNode->left);
        cout << startNode->data << " ";
        printData_LNR(startNode->right);
    }
}
 
 
//后序遍历
template<class Type>
void BSTree<Type>::printData_LRN(const BinaryNode<Type> *startNode){
    if(startNode == NULL){
        return;
    }else{
        printData_LRN(startNode->left);
        printData_LRN(startNode->right);
        cout << startNode->data << " ";
    }
