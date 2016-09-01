#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    if ( (number & (number -1)) == 0 ) {
        printf("yes %d\n", number & (number -1));
    } else {
        printf("no %d\n", number & (number -1));
    }
    
    return 0;
}
