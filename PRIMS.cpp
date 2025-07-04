#include <stdio.h>

#define INF 9999
#define MAX 10

int graph[MAX][MAX], visited[MAX], n;

void prims() {
    int edges = 0, min, u = 0, v = 0, total = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    visited[0] = 1; // start from node 0

    printf("Edge\tWeight\n");

    while (edges < n - 1) {
        min = INF;

        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                for (int j = 0; j < n; j++) {
                    if (!visited[j] && graph[i][j] < min) {
                        min = graph[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        visited[v] = 1;
        printf("%d - %d\t%d\n", u, v, min);
        total += min;
        edges++;
    }

    printf("Total cost = %d\n", total);
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (9999 if no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    prims();
    return 0;
}

