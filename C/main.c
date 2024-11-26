#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;
    scanf("%d", &x);

    printf("Hello World");
    printf("\nOlá Mundo! X = %d", x);
    return 0;
}