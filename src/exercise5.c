#include <stdio.h>

int main() {
    int A[10][3];
    int B[3][10];
    int result[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", result[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}
