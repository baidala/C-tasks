#include <stdio.h>

int main() {
    int y;
    
    scanf("%d", &y);
    if ( y == 366 ) {
        printf("yes\n");
    } else if ( y == 365 ) {
        printf("no\n");
      } else {
        printf("Invalid param\n");
    }
    return 0;
}

