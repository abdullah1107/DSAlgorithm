//
// Created by Muhammad Mamun on 4/9/22.
//
#include "BSTree.h"

//BSTree *findMinimum(BSTree *root){
//    BSTree *currentNode = root;
//    while(currentNode != nullptr && currentNode->left != nullptr){
//        currentNode = currentNode->left;
//    }
//    return  currentNode;
//}

// using Recursion Finding Minimum
BSTree *findMinimum(BSTree *root){
    if (root == nullptr) return nullptr;
    else if (root->left == nullptr) return root;

    else if(root->left  != nullptr){
        root = findMinimum(root->left);
    }
    return  root;
}

BSTree *findMaximum(BSTree *root){
    BSTree *currentNode = root;
    while(currentNode != nullptr && currentNode->right != nullptr){
        currentNode = currentNode->right;
    }
    return  currentNode;
}