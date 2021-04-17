////
////  main.cpp
////  TreeConstruct
////
////  Created by Muhammad Abdullah Al Mamun on 2/4/21.
////
//
//#include <iostream>
//using namespace std;
//
////int tree[100];
////int number;
////string treePath [100];
////
////void printPath(){
////
////}
////
////void processingData(int initvalue, int endignvalue){
////    if (initvalue == endignvalue){
////        printPath();
////        return;
////    }
////
////    int mid = (initvalue + endignvalue)/2;
////    treePath[initvalue] = "l";
////    processingData(initvalue, mid);
////    treePath[initvalue] = "r";
////    processingData(mid+1, endignvalue);
////
////}
////
////void scanData(){
////
////    cout<<"Enter number of value:";
////    cin>>number;
////
////    for (int i = 0; i<number; i++){
////        cin>>tree[i];
////    }
////    cout<<endl;
////}
//
////void processing(int temp[][], int row, int col, int index){
////    if (index == col){
////        return;
////    }
////}
//
//
//int main() {
//    //cout << "Hello, World!\n";
//    //    scanData();
//    //    processingData(0, number);
//    //    return 0;
//
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int arraydata[100];
//int N;
//
//
//void processingdata(int value){
//   if (value == 1) {
//       return;
//   }
//   else{
//       cout<<arraydata[value]<<endl;
//       processingdata(value--);
//   }
//}
//
//
//void scandata(){
//  for (int i=0; i<N; i++){
//    cin >>arraydata[i];
//  }
//}
//
//int main(){
//    cin>>N;
//    scandata();
//    processingdata(N-1);
//}



#include <iostream>
using namespace std;

int row,col;
int arrayData[100][100];
int Data[100];

void printdata(int printarray[]){
   for (int i = 0 ; i<row; i++){
      cout<<printarray[i]<<" ";
   }
   cout<<endl;
}


void recursion(int row, int coll, int index){
  
  if(index == row){
     printdata(Data);
     return;
  }
  Data[index] = arrayData[index][coll];
  recursion(row, coll, index+1);

}

void scandata(){
    cin>>row>>col;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arrayData[i][j];
            }
        }
}

int main() {
    
  scandata();
  for(int j=0; j<col; j++){
       recursion(row, j, 0);
  }
 

    // for(int i=0; i<col; i++){
    
    //     for(int j=0; j<row; j++){
    //         cout<< arrayData[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    

}



