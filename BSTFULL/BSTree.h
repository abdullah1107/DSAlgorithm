//
// Created by Muhammad Mamun on 4/9/22.
//
#ifndef BSTFULL_BSTREE_H
#define BSTFULL_BSTREE_H
#include <iostream>
using namespace std;

struct BSTree{
    int value;
    BSTree *left;
    BSTree *right;
};

BSTree *insertInBST(BSTree *currentNode, int insertValue);
BSTree *searchInBST(BSTree *currentNode, int searchValue);
BSTree *findMinimum(BSTree *root);
BSTree *findMaximum(BSTree *root);
void configureTree(BSTree *root);
void labelTravers(BSTree *root);
#endif //BSTFULL_BSTREE_H
