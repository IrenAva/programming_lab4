#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float numbers[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }
    
    float X = atof(argv[1]);
    int K = atoi(argv[2]);
    
    for (int i = 9; i > K; i--) {
        numbers[i] = numbers[i - 1];
    }
    
    numbers[K] = X;
    
    for (int i = 0; i < 10; i++) {
	if (i == 9)
	{
            printf("%g", numbers[i]);
	    break;
	}
        printf("%g ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
