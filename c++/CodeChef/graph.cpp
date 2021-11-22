#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
      int V;
      list<int> *adj;
      Graph(int V);
      void add_edge(int u,int v);   
};

Graph::Graph(int V){
    this->V=V;
    adj = new list<int>[V];
}

void Graph :: add_edge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    Graph g(4);
    g.add_edge(0,1);
}