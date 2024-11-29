#include <stdio.h>

int main() {
    int i, num[10];

    for(i = 0; i < 10; i++) {
        printf("Digite a posição %d: ", i);
        scanf("%d", &num[i]);
    };
    for(i = 9; i >= 0; i--)
        printf("%d ", num[i]); 
    
    printf("\n\n\n");

    return 0;
};