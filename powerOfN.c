#include <stdio.h>

int main() {
    int count, power, base;
    
    scanf("%d %d", &base, &power);
    
    count = 1;
    for ( int i = 0; i < power; i++ ) {
        printf("%d ", count);
        count *= base;
    }
    printf("%d\n", count);
    
    return 0;
}
