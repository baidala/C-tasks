#include <stdio.h>

int main() {
    int x;
    int y;
    
    scanf("%d %d", &x, &y);
    printf("%d<%d is %d", x, y, x<y);
    printf("\n%d>%d is %d", x, y, x>y);
    printf("\n%d<=%d is %d", x, y, x<=y);
    printf("\n%d>=%d is %d", x, y, x>=y);
    printf("\n%d==%d is %d", x, y, x==y);
    printf("\n%d!=%d is %d\n", x, y, x!=y);
    return 0;
}

