#include <stdio.h>

int main() {
// atualização
    int x, y;
    long int res = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    for(int i = 0; i < y; i++) {
        res = res * x;
    };

    printf("%d elevado a %d é igual a: %ld", x, y, res);

    return 0;
};