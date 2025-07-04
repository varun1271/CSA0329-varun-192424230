#include <stdio.h>

int parent[10];

int find(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

void union_set(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[b] = a;
}

int main() {
    int n, e, u, v, w;
    int edges[20][3], i, j, total = 0, count = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < e; i++)
        scanf("%d %d %d", &edges[i][0], &edges[i][1], &edges[i][2]);

    // Sort edges by weight
    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edges[j][2] > edges[j + 1][2]) {
                int t1 = edges[j][0], t2 = edges[j][1], t3 = edges[j][2];
                edges[j][0] = edges[j + 1][0];
                edges[j][1] = edges[j + 1][1];
                edges[j][2] = edges[j + 1][2];
                edges[j + 1][0] = t1;
                edges[j + 1][1] = t2;
                edges[j + 1][2] = t3;
            }
        }
    }

    printf("Edges in MST:\n");
    for (i = 0; i < e && count < n - 1; i++) {
        u = edges[i][0];
        v = edges[i][1];
        w = edges[i][2];

        if (find(u) != find(v)) {
            union_set(u, v);
            printf("%d - %d\t%d\n", u, v, w);
            total += w;
            count++;
        }
    }

    printf("Total cost = %d\n", total);
    return 0;
}

