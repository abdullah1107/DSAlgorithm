#include <iostream>
using namespace  std;

struct DoublyNode{
    int data;
    DoublyNode *next;
    DoublyNode *prev;
};

DoublyNode *root = NULL;

void insertRoot(int value){
    //DoublyNode *node = new DoublyNode();

    if (root == NULL){
        DoublyNode *root = new DoublyNode();
        root->data = value;
        root->next = NULL;
        root->prev = NULL;
    }


}

void insertOthers(int value){

}

void  PrintRoot(DoublyNode *root){
    cout<<root->data;
}

int main() {
    insertRoot(5);
    PrintRoot(root);

    return 0;
}
