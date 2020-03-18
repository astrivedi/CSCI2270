#include<iostream>
#include "Graph.hpp"
#include<vector>
#include <queue>
#include <stack>
using namespace std;


int Graph::str2idx(string u) {

  return -1;
}
string Graph::idx2str(int u_id) {
  
  return "";
}

void Graph::add_vertex(string u) {

}

void Graph::add_edge(string u, string v) {

  return;
}

void Graph::pretty_print() {
  for (int i = 0; i < vertices.size(); i++) {
    cout << vertices[i]->name << " --> ";
    for (int j = 0; j < vertices[i]->edges.size(); j++) {
      cout << idx2str(vertices[i]->edges[j]) << ", ";
    }
    cout << endl;
  }
}

void Graph::dfs_helper(int u_id) {

}

void Graph::dfs(string u) {

}

void Graph::bfs(string s) {

}


