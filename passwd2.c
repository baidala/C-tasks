#include <stdio.h>

int main() {
    int pwd;
    
   

    for ( int failed = 0; failed <= 4 ; failed++ ) {
       scanf("%d", &pwd); 
       if ( pwd == 1488 ) {
       printf("accepted\n");
       return 0;
       } else {
         printf("incorrect password\n");
         }
    }
    printf("denied\n");

    return 0;
}

