//
// Created by Muhammad Mamun on 4/9/22.
//
#include "BSTree.h"

BSTree *searchInBST(BSTree *currentNode, int searchValue){
    if(currentNode == nullptr) return currentNode;
    //else if(currentNode->value == searchValue) return currentNode;
    else if(currentNode->value == searchValue) {
        currentNode =  currentNode;
        //cout<<currentNode->value<<"->";
    }

    else if(currentNode->value > searchValue){
        cout<<currentNode->value<<"->";
        currentNode = searchInBST(currentNode->left, searchValue);

    }
    else if(currentNode->value < searchValue){
        cout<<currentNode->value<<"->";
        currentNode = searchInBST(currentNode->right, searchValue);
    }
    //cout<<currentNode->value <<"->"<<endl;
    return currentNode;
}