#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    if ( a % 2 == 0 ) {
        printf("alpha\n");
    }
    if ( a % 3 == 0 ) {
        printf("bravo\n");
    }
    if ( a % 5 == 0 ) {
        printf("charlie\n");
    } else if ( a % 3 != 0 && a % 5 != 0 && a % 2 != 0 ) {
        printf("zulu\n");
    }
    
    return 0;
}

