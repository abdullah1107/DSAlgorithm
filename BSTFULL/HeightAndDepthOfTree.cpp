//
// Created by Muhammad Mamun on 4/9/22.
//
#include "BSTree.h"



void preOrderTravers(BSTree *currentNode){
    if(currentNode == nullptr) return;
    cout<<currentNode->value<<"->";
    preOrderTravers(currentNode->left);
    preOrderTravers(currentNode->right);
}

int findingHeightOFTree(BSTree *node){
    if (node == nullptr) return -1;
    int leftHeight = findingHeightOFTree(node->left) + 1;
    //cout<<"leftHeight"<<node->value<<" :"<<leftHeight<<endl;
    int rightHeight = findingHeightOFTree(node->right) + 1;
    //cout<<"rightHeight"<<node->value<<" :"<<rightHeight<<endl;
    return max(leftHeight, rightHeight);
}

void configureTree(BSTree *root){
    root = insertInBST(root, 50);
    insertInBST(root, 30);
    insertInBST(root, 70);
    insertInBST(root, 20);
    insertInBST(root, 40);
    insertInBST(root, 35);
    insertInBST(root, 45);
    insertInBST(root, 60);
    insertInBST(root, 90);
    preOrderTravers(root);
    cout<<"\n"<<findingHeightOFTree(root);

}