// Да се напише функция, която приема масив от ребрата на ненасочен граф и връща матрица, 
// за която е заделено точно количество памет, която представлява матрица на съседство на графа.
// Вход:
// 0 1
// 0 2
// 1 4
// 1 5
// 2 3
// Изход:
// 0 1 1 0 0 0
// 1 0 0 0 1 1
// 1 0 0 1 0 0
// 0 0 1 0 0 0
// 0 1 0 0 0 0
// 0 1 0 0 0 0

#include <iostream>

using namespace std;

int** createAdjacencyMatrix(int** edges, int numEdges, int numVertices) {
    int** adjacencyMatrix = new int*[numVertices];
    for (int i = 0; i < numVertices; ++i) {
        adjacencyMatrix[i] = new int[numVertices]();
    }

    for (int i = 0; i < numEdges; ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }

    return adjacencyMatrix;
}

int main() {
    int numEdges = 5;
    int numVertices = 6;

    int** edges = new int*[numEdges];
    for (int i = 0; i < numEdges; ++i) {
        edges[i] = new int[2];
    }

    edges[0][0] = 0; edges[0][1] = 1;
    edges[1][0] = 0; edges[1][1] = 2;
    edges[2][0] = 1; edges[2][1] = 4;
    edges[3][0] = 1; edges[3][1] = 5;
    edges[4][0] = 2; edges[4][1] = 3;

    int** adjacencyMatrix = createAdjacencyMatrix(edges, numEdges, numVertices);

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < numEdges; ++i) {
        delete[] edges[i];
    }
    delete[] edges;

    for (int i = 0; i < numVertices; ++i) {
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;

    return 0;
}