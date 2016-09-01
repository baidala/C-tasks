#include <stdio.h>

int main() {
    int x;
    int y;
        
    scanf("%d %d", &x, &y);

    if ( y != 0 ) {
      if ( x % y == 0 ) { printf("yes\n"); } 
      
    }else {
       printf("no\n");
    }

    return 0;
}

