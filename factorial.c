#include <stdio.h>

int main() {
    int number, factor;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        factor = -1;
    } else {
        factor = 1;
        }
        
        for ( int i = 1; i <= number; i++ ) {
            factor *= i;
        }
        printf("%d\n", factor);
    
    
    return 0;
}
