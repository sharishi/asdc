//
// Created by Vica on 27.03.2024.
//
#include <iostream>
#include <vector>
#include "../../graphs/graph.h"

int main() {
    std::cout << "LAB 4" << std::endl;
    Node_Graph *rootNode = createGraph();
    std::cout << "Node1 neighboring vertices: " << std::endl;
    printNeighborsValue(rootNode);

    std::cout << "BFS traversal: " << std::endl;
    bfs(rootNode);
    Node_Graph *rootNode2 = createGraph();
    std::cout << "DFS traversal: " << std::endl;
    dfs(rootNode2);

    std::cout << std::endl << "Sum of neighbor values for node1: " << sumNeighborValues(rootNode) << std::endl;

    free_memory(rootNode);
    free_memory(rootNode2);

}
