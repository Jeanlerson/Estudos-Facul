#include <stdio.h>

int main() {
    for(int i = 1; i < 100; i++) {
        if(i % 10 == 0)
            break;
        printf("%d, ", i);
    };

    printf("\n");

    for(int i = 1; i < 100; i++) {
        if(i % 10 == 0)
            continue;
        printf("%d, ", i);
    };
};