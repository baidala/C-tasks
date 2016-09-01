#include <stdio.h>

int main() {
    int d;
    
    scanf("%d", &d);
    
    if ( d < 0 ) {
        printf("0\n");
    } else if ( d == 0 ) {
        printf("1\n");
    } else if ( d > 0 ) {
        printf("2\n");
    }
    
    return 0;
}

