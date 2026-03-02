#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    printf("Sum of left diagonal: %d\n", sum);
    return 0;
}
