#pragma once
#include<iostream>
#include<vector>

using namespace std;

struct Vertex {
  string name; /* name of the vertex */
  vector<int> edges; /* edge list as a vector of ids of verteices */
  bool visited;  /* useful to label visited vertices */ 
  int distance; /* useful to compute distance from a certain vertex */

  Vertex() { name = ""; visited = false; distance = -1;}
  Vertex(string _name) { name = _name; visited = false; distance = -1;}
  Vertex(string _name, int d) { name = _name; visited = false; distance = d;}
};

class Graph {
private:
  vector<Vertex *> vertices; /* set of vertices */
public:
  void add_vertex(string u);
  void add_edge(string u, string v);
  void pretty_print();
  void bfs(string u); /* breadth-first traversal */
  void dfs(string u); /* depth first traversal */
  
private:
  int str2idx(string u); /* returns id of a vertex given name, -1 if absent */
  string idx2str(int id); /* returns name of a vertex given index, " " if absent */
  void dfs_helper(int u);
};

