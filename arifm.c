#include <stdio.h>

int main() {
    int x;
    int y;
    
    scanf("%d %d", &x, &y);
    printf("%d+%d=%d", x, y, x+y);
    printf("\n%d-%d=%d", x, y, x-y);
    printf("\n%d*%d=%d", x, y, x*y);
    printf("\n%d/%d=%d", x, y, x/y);
    printf("\n%d%%%d=%d\n", x, y, x%y);
    return 0;
}

