#include <stdio.h>

#define MULTIPLE 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % MULTIPLE != 0 ) {
        min += 1;
    }
    for ( int i = min; i <= max; i += MULTIPLE ) {
        printf("%d\n", i);
    }
    
    return 0;
}
