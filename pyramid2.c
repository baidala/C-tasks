#include <stdio.h>

int main() {
	int size, count;
	 
	scanf("%d", &size);
    count = 1;
    for ( int row = 1; row <= size; row++ ) {
        for ( int col = 1; col < row ; col++, count++ ) {
            printf("%d ", count);
        }
        
        printf("%d\n", count);
        count += 1;
    }
	
	
	
	
	return 0;
}
