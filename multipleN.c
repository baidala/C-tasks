#include <stdio.h>

int main() {
    int border, divisor, count, i;
    
    scanf("%d %d", &border, &divisor);
    if ( divisor < 0 ) {
        divisor = divisor * (-1);
    }
    count = (border / divisor) * divisor;
    for ( i = 0; i < count; i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", i);
    
    return 0;
}
