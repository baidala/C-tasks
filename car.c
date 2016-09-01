#include <stdio.h>

int main() {
    int speed, limit;
    
    scanf("%d %d", &speed, &limit);

    if ( speed >= 0 && limit > 0 && speed <= limit ) {
        printf("ok\n");
    } else {
        printf("violation\n");
    }
    return 0;
}

