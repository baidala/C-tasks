#include <stdio.h>

int main() {
    int telnumber, minuts;
    
    scanf("%d %d", &telnumber, &minuts);

    if ( telnumber == 101 || telnumber == 102 || telnumber == 103 || telnumber == 104 || telnumber == 112 ) {
        printf("0$\n");
    } else if ( 1000000 <= telnumber && telnumber <= 9999999 ) {
        printf("%d$\n", minuts);
    } else if ( 100 <= telnumber && telnumber <= 999 ) {
        printf("%d$\n", minuts*40 );
    } else {printf("-1\n");}
    return 0;
}

