#include <stdio.h>

int main() {
    int count, hours, base;
    
    scanf("%d %d", &count, &hours);
    
    
    for ( int i = 1; i <= hours; i++ ) {
        count *= 2;
        printf("%dh => %d amoeba(s)\n", i, count);
        
    }
    //printf("%dh => %d amoeba(s)\n", count);
    
    return 0;
}
