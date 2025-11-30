//Check if the elements on the diagonal of a matrix are distinct.

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

    
    int size = (n < m) ? n : m;

    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
