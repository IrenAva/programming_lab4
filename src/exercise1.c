#include <stdio.h>

int main() {
    float numbers[10];
    float sum = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    
    float average = sum / 10;
    
    printf("%f\n", average);
    
    return 0;
}
