#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    for ( ; number % 2 == 0; number /= 2 );
    if ( number == 1 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
