
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;
    scanf("%d", &x);

    printf("Hello World");
    printf("\nOlá Mundo! X = %d\n", x);

    //

    int res;
    int b = 1;
    int n;

    scanf("%d", &n);
    
    while (b <= n) {
        res = 2 * b;
        printf("Tabuada de 2: 2 x %d = %d\n",b, res);

        b++;
    };

    return 0;
}