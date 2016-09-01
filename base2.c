#include <stdio.h>

#define ASCIIZERO 48
#define ASCIININE 57
#define SHIFTA 7
#define MINUS 45

int numbertoascii(int base) {
    int symbol;
    
    base += 1;
    for ( int i = 0; i < base; i++ ) {
        symbol = i + ASCIIZERO;
        if ( symbol > ASCIININE ) {
            symbol += SHIFTA;
        }
    }
    return symbol;
}

int main() {
    int number, base;
    int max = 1;
    
    scanf("%d %d", &number, &base);
    
    if ( number < 0 ) {
        number *= -1;
        printf("%c", MINUS);
    }
    
    for ( ; number / max >= base; max *= base );
    
    for ( ; max >= 1; max /= base ) {
        printf("%c", numbertoascii(number/max));
        number %= max;
    }
    printf("\n");
    
    return 0;
}
