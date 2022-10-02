#include <iostream>
#include<queue>
#include <set>
#include <vector>
using namespace std;

int grid[4][5] =
           {{1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {0, 0, 0, 1, 1},
            {0, 0, 0, 1, 1}};

int visited[4][5];
queue<pair<int,int>>q;
set<vector<pair<int, int>>>st;

int dr[] = {+1, 0, -1, 0};
int dc[] = {0, +1, 0, -1};

void bfs(int sRow, int sCol, vector<pair<int, int>>&vec){
     q.push(make_pair(sRow, sCol));


     while(!q.empty()){
         int currentRow = q.front().first;
         int currentCol = q.front().second;

         vec.push_back({sRow-currentRow,sCol-currentCol});

         for(int i=0; i<4; i++){
             int tRow = currentRow + dr[i];
             int tCol = currentCol + dc[i];


             if(tRow>=0 && tRow<4 && tCol>=0 && tCol<5 && !visited[tRow][tCol] && grid[tRow][tCol]==1){
                 visited[tRow][tCol] = 1;
                 q.push(make_pair(tRow, tCol));
             }
         }
         q.pop();
     }
}

int init(){
    int counter = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(grid[i][j] == 1 && !visited[i][j]){
                vector<pair<int, int>>vec;
                bfs(i, j, vec);
                counter++;
                st.insert(vec);
                vec.clear();
            }
        }
    }
    return counter;
}


int main() {
    memset(visited, 0, sizeof(visited));
    cout<<init()<<endl;
    cout<<st.size();
    return 0;
}
