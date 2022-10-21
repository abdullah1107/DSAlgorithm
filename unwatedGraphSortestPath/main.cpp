#include <iostream>
#include<vector>
#include <queue>
using namespace std;
typedef pair<int, int>ptr;

vector<pair<int, int>>adj[15];
int dis[15];

void findShortestPath(int source){
     priority_queue<ptr, vector<ptr>, greater<ptr>>pq;

     pq.push(make_pair(0, source));
     dis[source] = 0;

     while(!pq.empty()){
         int currentNode = pq.top().second;
         int currentWeight = pq.top().first;

         for(auto tempNode: adj[currentNode]){
             int tempNodeSource = tempNode.first;
             int tempNodeWeight = tempNode.second;

             if(dis[tempNodeSource] > currentWeight + tempNodeWeight){
                 dis[tempNodeSource] = currentWeight + tempNodeWeight;
                 pq.push(make_pair(dis[tempNodeSource], tempNodeSource));
             }
         }
         pq.pop();
     }
}

void addEdge(int u, int v, int w){
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void printDistance(){
    for(int i =0; i<6; i++){
        cout<<dis[i]<<" ";
    }
}

int main() {
   memset(dis, 9999, sizeof(dis));
    addEdge(0,1,5);
    addEdge(0,2,3);
    addEdge(1,2,1);
    addEdge(1,3,2);
    addEdge(2,3,4);
    addEdge(3,4,2);
    addEdge(4,5,6);
    findShortestPath(0);
    printDistance();
}
