//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (int d = 0; d < n + m - 1; d++) {
        int start_row = (d < m) ? 0 : d - m + 1;
        int count = (d < m) ? d + 1 : (n + m - 1 - d < n) ? n : n + m - 1 - d;

        for (int j = 0; j < count; j++) {
            int row = start_row + j;
            int col = d - row;
            if (col >= 0 && col < m && row < n) {
                printf("%d ", a[row][col]);
            }
        }
    }

    return 0;
}