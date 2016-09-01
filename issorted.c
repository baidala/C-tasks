#include <stdio.h>

int main() {
    
    int a, b, c, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    
    if ( e >= d && d >= c && c >=  b && b >= a ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

