//
//  main.cpp
//  Decimal to Different bits Binary Recursion
//
//  Created by Muhammad Abdullah Al Mamun on 17/3/21.
//

#include <iostream>
using namespace std;

#define SIZE 100
int dataArray[SIZE];


void printData(int value){
    for (int i = 0; i<value; i++){
        cout<<dataArray[i];
    }
    cout<<endl;
}


void processingData(int dataArray[], int number, int initvalue){
    
    //base case
    
    if (initvalue == number){
        printData(number);
        return;
    }else{
        dataArray[initvalue] = 0;
        processingData(dataArray, number, initvalue + 1);
        dataArray[initvalue] = 1;
        processingData(dataArray, number, initvalue + 1);
    }
    
    
}

void scanData(){
    
    int number;
    cout<<"Enter a value:";
    cin>>number;
    cout<<endl;
    cout<<"data procesing start..."<<endl;
    processingData(dataArray, number, 0);
    
    
}



int main() {
   
    
    
    while(1){
        cout << "start scan..."<<endl;
        scanData();
        cout<<endl;
    }
    
    return 0;
}
