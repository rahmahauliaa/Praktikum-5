#include <stdio.h>

int main() {
    int n1, n2;
    if (scanf("%d %d", &n1, &n2) != 2) return 0;
    
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }
    
    int row1[n1], row2[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &row1[i]);
    }
    for (int i = 0; i < n1; i++) {
        scanf("%d", &row2[i]);
    }
    
    for (int i = 0; i < n1; i++) {
        printf("%d%s", row1[i] * row2[i], (i == n1 - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}