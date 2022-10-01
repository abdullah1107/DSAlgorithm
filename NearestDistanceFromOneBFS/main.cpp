#include <iostream>
#include <queue>
using namespace std;

int adj[3][3]= {{0, 0, 0}, {0, 1, 0}, {1, 0, 1}};;
int visited[10][10];
int dis[10][10];

int dr[] = {-1, +1, 0, 0};
int dc[] = {0,0,-1, +1};
queue<pair<int, pair<int, int>>>q;

void bfsTravers(){
    while(!q.empty()){
        int distance = q.front().first;
        int cRow = q.front().second.first;
        int cCol = q.front().second.second;

        for(int i=0; i<4; i++){
           int tRow = cRow + dr[i];
           int tCol = cCol + dc[i];

           if(!visited[tRow][tCol] && tRow>=0 && tRow<3 && tCol>=0 && tCol<3){
               visited[tRow][tCol] = 1;
               q.push(make_pair(distance+1, make_pair(tRow, tCol)));
               dis[tRow][tCol] = distance + 1;

           }
        }
        q.pop();
    }
}

void scanMultiSources(){
  for(int row = 0; row<3; row++){
      for(int col =0; col<3; col++){
          if(adj[row][col] == 1){
              q.push(make_pair(0, make_pair(row, col)));
              visited[row][col] = 1;
              dis[row][col] = 0;
          }
      }
  }
}

void print(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<dis[i][j];
        }
        cout<<endl;
    }
}



int main() {
    memset(visited, 0, sizeof(visited));
    memset(dis, 0, sizeof(dis));
    scanMultiSources();
    bfsTravers();
    print();

}
