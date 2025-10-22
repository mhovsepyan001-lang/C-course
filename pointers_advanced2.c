#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", *(matrix + i) + j); // pointer version of &matrix[i][j]
        }
    }

    // Print transpose directly using pointers
    printf("Transpose of the matrix:\n");
    for (int j = 0; j < m; j++) {        
        for (int i = 0; i < n; i++) {
            printf("%d ", *(*(matrix + i) + j)); // pointer version of matrix[i][j]
        }
        printf("\n");
    }

    return 0;
}


