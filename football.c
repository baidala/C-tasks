#include <stdio.h>

int main() {
    int home, away;
    
    scanf("%d %d", &home, &away);

    if ( home > 0 &&  away >= 0 && home > away ) {
        printf("Home team wins\n");
    } else if ( home >= 0 &&  away > 0 && home < away ) {
        printf("Away team wins\n");
    } else if ( home >= 0 &&  away >= 0 && home == away ) {
        printf("Draw\n");
    } 
    return 0;
}

