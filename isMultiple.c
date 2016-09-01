#include <stdio.h>

int main() {
    int aDiv, bMult;
    
    scanf("%d %d", &aDiv, &bMult);
    
    if ( aDiv % bMult == 0 && bMult != 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

