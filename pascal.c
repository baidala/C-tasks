#include <stdio.h>

int valueOf(int row, int col) {
    int value = col + 1;
    //int diff = row - col;
    
  
       
        for ( int i = value+1, j = row+1, k = 2; i < j; i++, k++ ) {
            int temp = value;
            value *= i;
            //printf(" a_%d x b_%d = x_%d\n", temp, i, value);
            value /= k;
            //printf(" x / %d = %d\n", k, value);
        }    
            
        
        
        
    
    
    return value;
}

int main() {
    int size;
    
    scanf("%d", &size);
    
    //printf("%d ", valueOf(10, 0));
    //printf("%d ", valueOf(10, 1));
    //printf("%d ", valueOf(10, 2));
    //printf("%d ", valueOf(10, 5));
    //printf("\n");
    //printf("%d ", valueOf(11, 5));
    //printf("%d ", valueOf(11, 6));
    //printf("\n");
    //printf("%d ", valueOf(12, 3));
    
    //printf("\n");
    
    for ( int row = 0; size > row; row++ ) {
        for ( int col = 0; row > col; col++ ) {
            if ( col == 0 || col == row ) {
                printf("1 ");
            } else if ( col == 1 || col == row - 1 ) {
                printf("%d ", row);
            } else {
                printf("%d ", valueOf(row, col));
            }
        }
        printf("1\n");
    }
    
    return 0;
}
