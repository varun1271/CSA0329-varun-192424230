#include <stdio.h>

int graph[10][10], visited[10], n;

void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS starting from vertex 0:\n");
    DFS(0);

    return 0;
}


