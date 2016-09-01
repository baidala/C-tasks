#include <stdio.h>

int isPrime(int n) {
    if ( n > 1 ) {
        for ( int count = 2; count < n; count++ ) {
            if ( n % count == 0 ) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}



int main() {
	int numbr;
	scanf("%d", &numbr);
	
	printf("%d\n", isPrime(numbr));
	
	return 0;
}
