#include <stdio.h>

int main() {
    int number, base, max;
    
    scanf("%d %d", &number, &base);
    
    for ( max = 1; number / max >= base; max *= base );
    
    for ( ; max >= 1; max /= base ) {
        printf("%d", number/max);
        number %= max;
    }
    printf("\n");
    
    return 0;
}

