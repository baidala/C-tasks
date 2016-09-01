#include <stdio.h>

int main() {
	int number, count;
	
	scanf("%d", &number);

	count = 1;
	for ( int i = 1; i < number; i++ ) {
		if (number % i == 0) {
			count += 1;
			printf("divisor %d\n", i);
			}
		
	}
	printf("%d\n", count);
	
	
	
	return 0;
}
