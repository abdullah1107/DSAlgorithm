// Created by Muhammad Mamun on 4/9/22.
#include "BSTree.h"
// 50, 30,70,20,40,60,80

BSTree *createNewNode(int insertValue){
    BSTree *node = new BSTree();
    node->value = insertValue;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}


BSTree *insertInBST(BSTree *currentNode, int insertValue){
    if(currentNode == nullptr) {
        currentNode = createNewNode(insertValue);
        //cout<<"Begin with ->"<<currentNode->value<<endl;
    }
    else if(currentNode->value > insertValue){
            currentNode->left = insertInBST(currentNode->left, insertValue);
    }
    else if(currentNode->value < insertValue){
            currentNode->right = insertInBST(currentNode->right, insertValue);
    }
    //cout<<"End with ->"<<currentNode->value<<endl;
    return currentNode;
}

