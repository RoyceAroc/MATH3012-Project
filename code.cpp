#include <bits/stdc++.h>

using namespace std;

/*

Our program will first input a graph with nodes and connected edges based on the
concrete network. We will then identify if there is a planar graph using
certificate algorithms, and if one exists, we will print the planar graph. If a
planar graph does not exist, we will construct an isomorphic graph that has the
minimal number of crossings.

*/

int main() {
  freopen("input.txt", "r", stdin);

  int nodes; int edges; 
  cin >> nodes; cin >> edges;
  vector<list<int>> graph;  
  int a; int b;

  for(int i=0; i<edges; ++i) {
	  cin >> a; cin >> b;
	  cout << a << " " << b;
	  graph[a].push_back(b);
      graph[b].push_back(a);
  }

  // TBD: Code base case check with switch for nodes [0, 2]

  if(nodes >= 3 && edges <= (3*nodes) - 6) { // Trotter - Theorem 5.33 - Base check for planar graph
    // Kuratowski's theorem check TBD for K5 and K3,3 possibility exclusions 
    // More testing algorithms needed?

    // https://www.boost.org/doc/libs/1_53_0/libs/graph/doc/boyer_myrvold.html - Use library for planar embedding
  } else {
    computeIsomorphicGraph(nodes, edges, graph);
  }

}