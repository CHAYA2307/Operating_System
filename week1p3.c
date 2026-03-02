#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("Enter elements of %dx%d matrix:\n", r, c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        int rowSum = 0;
        for(int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, rowSum);
    }

    for(int j = 0; j < c; j++) {
        int colSum = 0;
        for(int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of column %d: %d\n", j+1, colSum);
    }

    return 0;
}
