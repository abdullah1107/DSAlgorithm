#include <iostream>
using namespace std;

int font = -1;
int rare = 0;

int myArray[100];

void pop(){
    if (font < 0){
        cout<<"Empty";
    }else{
        //myArray[font] = n;
        font = font - 1;
        rare = rare + 1;
    }
}

void push(int value){
   myArray[++font] = value;
}

void front(){
   if (font < 0){
       cout<<"Empty list";
   }else{
       cout<<myArray[rare]<<endl;
   }
}

int main() {
    push(5);
    push(3);
    push(1);
    push(9);
    front();
    pop();
    front();
    pop();
    pop();
    front();
    pop();
    front();

}
