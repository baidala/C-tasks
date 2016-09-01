#include <stdio.h>

int main() {
	int number, step, count;
	
	scanf("%d %d %d", &number, &step, &count);

	for ( int i = 1; i < count; i++ ) {
        printf("%d-", number);
        number += step;
    }
    printf("%d\n", number);
	
	
	
	return 0;
}
