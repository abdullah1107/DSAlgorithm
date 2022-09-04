#include <iostream>
using namespace std;

#define size 100
char charArray[size];
int top, pointer;

void pushValue(char ch){
    charArray[++pointer]= ch;
    top = top + 1;
}

void popValue(){
    charArray[top] = NULL;
    top = top - 1;
}

int arraySize(){
    return top;
}


int main() {
    pointer = -1;
    top = -1;
    pushValue('A');
    pushValue('P');
    pushValue('P');
    pushValue('L');
    pushValue('E');
    cout<<charArray<<endl;
    cout<<arraySize() + 1<<endl;
    popValue();
    popValue();
    cout<<charArray[3]<<endl;
    cout<<arraySize() + 1<<endl;
    return 0;
}
