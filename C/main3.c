#include <stdio.h>

int main() {
    int i, j;

    for(i = 0, j = 100; i < j; i++, j--) {
        printf("i = %d e j = %d \n", i, j);
    };
}