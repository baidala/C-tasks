#include <stdio.h>

int gcd(int a, int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd(b, a%b);
}

int main() {
    int maxDiv;
    int a = 0;
    int b = 1;
    
    scanf("%d", &maxDiv);
    
    
    printf("0/1 ");
    printf("\n");
    
    for ( int i = 1; i < maxDiv; i++ ) {
    	for ( int j = maxDiv; j > i; j-- ) {
    	    if ( gcd(i, j) == 1 ) {
    	      	printf("%d/%d ", i, j);
    	    	printf("\n");
    		}
    		//printf("%d%%%d = %d\n", i, j, i%j);
    	}
    }
    
    printf("1/1\n");

    return 0;
}
