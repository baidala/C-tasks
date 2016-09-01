#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    if ( number % 3 != 0 ) {
        number = (number / 3) * 3;
    }
    
    for ( int i = 0; i < number; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", number);
    
    return 0;
}
