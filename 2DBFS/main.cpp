#include <iostream>
#include<queue>
using namespace std;

queue<pair<int, int>>q;
int node, edges, u, v;
int adj[3][3] = {{1,1,1},
                 {1,1,0},
                 {1,0,1}};;
int visited[10];
int delRow[] = {-1, 0, +1, 0};
int delCol[] = {0, +1, 0, -1};

//void bfs(int rootNode){
//    visited[rootNode]=1;
//    q.push(rootNode);
//
//    while(!q.empty()){
//        int currentNode = q.front();
//        for(int i=0; i<=node; i++){
//            if(!visited[i] && adj[currentNode][i]==1){
//                visited[i]=1;
//                q.push(i);
//            }
//        }
//        q.pop();
//    }
//}

void bfsFloodFill(int sRow, int sCol, int color){

    //int targetColor = adj[sRow][sCol];
    q.push(make_pair(sRow, sCol));
    adj[sRow][sCol] = color;

    while(!q.empty()){
        sRow = q.front().first;
        sCol = q.front().second;

        for(int i =0; i<4; i++){
             int row = sRow + delRow[i];
             int col = sCol + delCol[i];


             if ((row>=0 && row<3 && col>=0 && col<3) && adj[row][col] == 1 && adj[row][col] != color){
                 q.push(make_pair(row,col));
                 adj[row][col] = color;
             }

        }
       q.pop();
    }




}


void showData(){

   for(int i=0;i<3; i++){
       for(int j=0;j<3; j++){
           cout<<adj[i][j]<<" ";
       }
       cout<<endl;
   }
}


int main() {
//    cout<<"Enter Node and Edges:"<<endl;
//    cin>>node>>edges;
//
//    memset(visited, 0, sizeof(visited));
   // memset(adj, 0, sizeof(adj));

//    cout<<endl;
//    cout<<"Enter u and v"<<endl;
//
//    for(int i=0; i<edges; i++){
//        cin>>u>>v;
//        adj[u][v] = 1;
//        adj[v][u] = 1;
//    }

showData();
bfsFloodFill( 1, 1, 2);
cout<<endl;
showData();
return 0;
}