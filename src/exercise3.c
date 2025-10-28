#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float numbers[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }
    
    int K = atoi(argv[1]);
    
    float result[10];
    
    for (int i = 0; i < 10; i++) {
        int new_index = (i + K) % 10;
        if (new_index < 0) {
            new_index += 10;
        }
        result[new_index] = numbers[i];
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%g ", result[i]);
    }
    printf("\n");
    
    return 0;
}
