#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if ( a > b && b > 0 ) {
        printf("alpha\n");
    } else if ( a < 0 && b > 0 ) {
        printf("bravo\n");
    } else if ( a == 0 || b == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }
    
    return 0;
}

