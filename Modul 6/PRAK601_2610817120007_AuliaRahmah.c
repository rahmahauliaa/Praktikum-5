#include <stdio.h>

int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    int matriks[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (j > 0) printf(" ");
            printf("%d", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}