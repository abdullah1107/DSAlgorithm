#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int node, edges;
vector<int>adj[15];
queue<pair<int, int>>q;

bool bfs(int source, int visited[]){
     q.push(make_pair(source, -1));
     bool cycle = false;

     while(!q.empty()){
         int currentNode = q.front().first;
         int parentNode = q.front().second;

         for(int temp:adj[currentNode]){
             if(!visited[temp]){
                 visited[temp] = 1;
                 q.push(make_pair(temp, currentNode));
             }
             else if(temp != parentNode){
                 cycle = true;
             }
         }
         q.pop();
     }
     return cycle;
}

void scan(){

    int u, v;
    cout<<"enter node and edges:"<<endl;
    cin>>node>>edges;

    for(int i=0; i<edges; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
/// no cycle
//6 5
//1 3
//3 2
//2 4
//4 5
//4 6

/// cycle
//6 6
//1 3
//3 2
//3 4
//2 5
//4 5
//4 6

int main() {

    scan();
    int visited[node+1];
    memset(visited, 0, sizeof(visited));
    cout<<bfs(1, visited)<<endl;


    return 0;
}
