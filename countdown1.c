#include <stdio.h>

int main() {
    int x;
    
    scanf("%d", &x);
    
    for ( int i = x; i > 0; i-- ) {
        printf("%d ", i);
    }
    printf("0\n");
    
    return 0;
}
