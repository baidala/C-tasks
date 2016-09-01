#include <stdio.h>

#define MULTIPLE 3

int main() {
    int min, max, count;
    
    scanf("%d %d", &min, &max);
    
    count = (min / MULTIPLE) * MULTIPLE;
    if ( count < min ) {
        count += MULTIPLE;
    }
    
    for ( ; count <= max; count += MULTIPLE ) {
        printf("%d\n", count);
    }
    
    return 0;
}
