#include <stdio.h>

int main(void) {
    int i, j, k, n = 5;
    
    for(int i = 0; i < n; i++) {
        for(j = 0; j < i; j++) printf(" ");
        for(k = 0; k < 2 * (n-i)-1; k++) printf("*");
        printf("\n");
    }

    return 0;
}