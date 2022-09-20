#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<int>q;

void bfs(int rootNode, int visited[], vector<int>adj[]){

    visited[rootNode] = 1;
    q.push(rootNode);
    cout<<rootNode<<"->";

    while(!q.empty()){
        int currentNode = q.front();

        for(int i=0; i<adj[currentNode].size(); i++){
            int tempNode = adj[currentNode][i];
            if(!visited[tempNode]){
                visited[tempNode] = 1;
                q.push(tempNode);
                cout<<tempNode<<"->";
            }
        }
        q.pop();
    }
}




int main() {
    int node, edges, u, v;
    cout<<"Enter Nodes and Edges:"<<endl;
    cin>>node>>edges;
    vector<int>adj[node+1];
    int visited[node+1];
    memset(visited, 0, sizeof(visited));

    for (int i=0; i<edges; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    bfs( 1, visited, adj);
    return 0;
}
