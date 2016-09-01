#include <stdio.h>

int main(){
	int min, max, count;
	
	scanf("%d %d", &min, &max);
	
	count = (min / 2) * 2;
	max = (max / 2) * 2;
	if ( count < min ) {
        count += 2;
    }
	
	
	for ( ; count < max; count += 2 ) {
          printf("%d-", count*count);
        
    }
    printf("%d\n", count*count);
	
	return 0;
}
