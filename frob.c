#include <stdio.h>

#define XORARG 42

int main() {
    int length, number; 
    
    scanf("%d", &length);
     
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &number);
        printf("%d\n", number ^ XORARG);
    }
    scanf("%d", &number);
    printf("%d\n", number ^ XORARG);


    return 0;
}
