#include <stdio.h>

int main() {
    int step;
    
    scanf("%d", &step);
    
    for ( int i = 1; i < step; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", step);
    
    return 0;
}
