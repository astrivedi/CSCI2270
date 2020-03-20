#include<iostream> 
#include "Graph.hpp"
#include<vector>
#include <queue>
#include <stack>

using namespace std;


int Graph::str2idx(string u) {
  for (int i = 0; i < vertices.size(); ++i) {
    if (vertices[i]->name == u) return i;
  }

  return -1;
}
string Graph::idx2str(int u_id) {
  if (u_id < vertices.size() && u_id >= 0) 
    return vertices[u_id]->name;
  else {
    cerr << "index out of range" << endl;
    return "";
  }
}

void Graph::add_vertex(string u) {
    if (str2idx(u) == -1) {
      Vertex* tmp = new Vertex(u);
      vertices.push_back(tmp);
    }
    else 
      cerr << "Vertex already present!" << endl;
}

void Graph::add_edge(string u, string v) {
  //Assume undircted graph 
  //u->u then v->u
  int u_id = str2idx(u);
  int v_id = str2idx(v);

  //test if vertex u and v are present 
  if (u_id == -1 || v_id == -1) {
    cerr << "One of the vertex does not exist" << endl;
    return;
  }
  else {
  // go to index corresponding to node u and add an edge to node v ..
    auto it = find(vertices[u_id]->edges.begin(), vertices[u_id]->edges.end(), v_id);

  if (it == vertices[u_id]->edges.end()) {
    vertices[u_id]->edges.push_back(v_id);
  }
  else {
    cerr << "Edge already exists" << endl;
  }

  // go to index corresponding to node u and add an edge to node v ..
  it = find(vertices[v_id]->edges.begin(), vertices[v_id]->edges.end(), u_id);

  if (it == vertices[v_id]->edges.end()) {
    vertices[v_id]->edges.push_back(u_id);
  }
  else {
    cerr << "Edge already exists" << endl;
  }

  return;
  }
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
  vertices[u_id]->visited = true;
  cout << idx2str(u_id) << " ";
  
  for(auto it = vertices[u_id]->edges.begin(); it != vertices[u_id]->edges.end(); ++it) {
    if (!vertices[*it]->visited) {
      dfs_helper(*it);
    } 
  }
}

void Graph::dfs(string u) {
  // Label all vertices as not-visited
  for (int i = 0; i < vertices.size(); ++i) {
    vertices[i]->visited = false; 
  }
  cout << "printing vertex in DFS" <<endl;
  dfs_helper(str2idx(u));
  cout << endl;
}

void Graph::bfs(string s) {
    cout << " BFS from " << s << endl;
  for (int i = 0; i < vertices.size(); ++i) {
    vertices[i]->visited = false; 
  }
  queue<int> waiting;
  int s_id = str2idx(s);


  vertices[s_id]->visited = true;
  waiting.push(s_id);
  
  while (!waiting.empty()) {
    int u_id = waiting.front();
    waiting.pop();
    
    cout << idx2str(u_id);

    for(auto it = vertices[u_id]->edges.begin(); it != vertices[u_id]->edges.end(); ++it) {
      if (!vertices[*it]->visited) {
        vertices[*it]->visited = true;
        waiting.push(*it);
      } 
    }

  }
  cout << endl;
}


