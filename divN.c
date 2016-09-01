#include <stdio.h>

int main(){
	int min, max, divisor, count;
	
	scanf("%d %d %d", &min, &max, &divisor);
	
	count = (min / divisor) * divisor;
	if ( count < min ) {
        count += divisor;
    }
	
	for ( ; count <= max; count += divisor ) {
        printf("%d\n", count);
    }
	
	return 0;
}
