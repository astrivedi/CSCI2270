#include<iostream>
#include "Graph.hpp"
#include<vector>

int main() {
  Graph G;
  G.add_vertex("A");
  G.add_vertex("B");
  G.add_vertex("C");
  G.add_vertex("D");
  G.add_vertex("E");
  G.add_vertex("F");
  G.add_vertex("G");

  G.add_edge("A","B");
  G.add_edge("A","C");
  G.add_edge("C","D");
  G.add_edge("D","E");
  G.add_edge("F","G");

  G.pretty_print();

  G.bfs("A");
  G.bfs("G");
  
  return 0;
}
