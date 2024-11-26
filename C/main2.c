#include <stdio.h>

int main() {
    int res;
    int x = 1;
    int n;

    scanf("%d", &n);
    
    while (x <= n) {
        res = 2 * x;
        printf("Tabuada de 2: 2 x %d = %d\n",x, res);

        x++;
    };

    return 0;
};