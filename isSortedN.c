#include <stdio.h>

int main() {
    int count, min, number, sorted;
    
    scanf("%d %d", &count, &min);
    
    sorted = 1;
    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &number);
        if ( number < min ) {
            sorted = 0;
            i = count;
        }
        min = number;
    }
    if ( sorted ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
