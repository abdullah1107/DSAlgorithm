//#include <iostream>
//using namespace std;
//
//// TreNode Struct
//struct Tree{
//    int value;
//    Tree *left;
//    Tree *right;
//};
//
//// Create a NewNode Dynamic
//Tree *createNode(int data){
//    Tree *node = new Tree();
//    node->value = data;
//    node->left = NULL;
//    node->right = NULL;
//
//    return node;
//}
//
//// Insert a Value in BST
//Tree *makeBST(Tree *currentNode, int insertValue){
//
//    if(currentNode == NULL){
//        currentNode = createNode(insertValue);
//    }
//    else{
//        if(currentNode->value > insertValue){
//             currentNode->left = makeBST(currentNode->left, insertValue);
//
//        }
//        else if(currentNode->value < insertValue){
//             currentNode->right = makeBST(currentNode->right, insertValue);
//        }
//    }
//    return currentNode;
//}
//// Search a Node in BST
//bool searchNode(Tree *node, int searchValue){
//    if (node == NULL) return false;
//    else if(node->value == searchValue) return true;
//    else if(node->value>searchValue){
//        return searchNode(node->left, searchValue);
//    }else if(node->value<searchValue){
//        return searchNode(node->right, searchValue);
//    }
//}
//
//void searchNodeOne(Tree *node, int searchValue){
//    if (node == NULL) return;
//    else if(node->value == searchValue) {
//       cout<<"->"<<node->value<<"Found";
//    }
//    else if(node->value>searchValue){
//        searchNodeOne(node->left, searchValue);
//    }else if(node->value<searchValue){
//        searchNodeOne(node->right, searchValue);
//    }
//}
//
//
//
//// Travers in BST
//void preOrderTravers(Tree *node){
//    if (node == NULL) return;
//    cout<<node->value<<"->";
//    preOrderTravers(node->left);
//    preOrderTravers(node->right);
//
//}
//
//
//Tree* findMinimum(Tree *node){
//    if (node->left == NULL && node->right == NULL) return node;
//    else if ((node->value > node->left->value) && (node->left->value != NULL)){
//        return findMinimum(node->left);
//    }
//    else if ((node->value > node->right->value) && (node->right->value != NULL)){
//         return findMinimum(node->right);
//    }
//}
//
//
//
//int main() {
//    Tree *root = NULL;
//    root = makeBST(root, 15);
//    makeBST(root,10);
//    makeBST(root,20);
//    makeBST(root,8);
//    makeBST(root,12);
//    makeBST(root,17);
//    makeBST(root,25);
//
// //   preOrderTravers(root);
//  //  cout<<endl;
// //   searchNodeOne(root, 10);
////    bool getResult = searchNode(root, 10);
////    (getResult) ? cout<<"Found" : cout<<"Not Found";
//     Tree *temp = findMinimum(root);
//     cout<<temp->value;
//
//    return 0;
//}

#include <iostream>
using namespace  std;

int main(){
    int array[15];
    cout<<"Enter value:"<<endl;
    for(int i=0; i<5; i++){
        cin>>array[i];
    }
}