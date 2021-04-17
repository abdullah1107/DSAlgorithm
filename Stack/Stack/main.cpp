//  main.cpp
//  Stack
//  Created by Muhammad Abdullah Al Mamun on 11/4/21.


#include <iostream>
using namespace std;


int stackArray [100];
int top = -1;
int range;


void push(int value, int range){
    
    if (top == range -1){
        cout<<"Stack is full"<<endl;
    }else{
        top = top + 1;
        stackArray[top] = value;
    }
}

void pop(){
    
    if (top == -1){
        cout<<"stack is empty"<<endl;
    }
    top = top - 1;
    
    
}

int pickupTop(){
    if (top <= -1){
        return -1;
    }else{
        return stackArray[top];
    }
    
}

void scanData(){
    
    cout<<"Enter the Range of Stack:";
    cin>>range;
    cout<<endl;
}

int main() {
    
    scanData();
    push(5, range);
    push(9, range);
    cout<<pickupTop()<<endl;
    pop();
    pop();
    pop();
    cout<<pickupTop()<<endl;
    
    return 0;
}
