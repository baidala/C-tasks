#include <stdio.h>

int main() {
    int y;
    
    scanf("%d", &y);
    if ( y % 2 != 0 ) {
        printf("%d\n", y);
    } else {
        y += 1;
        printf("%d\n", y);
    }
    return 0;
}

