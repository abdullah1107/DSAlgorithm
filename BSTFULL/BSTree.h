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
#endif //BSTFULL_BSTREE_H
