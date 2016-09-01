#include <stdio.h>

int lenght(int max) {
    int wight = 0;
    int div = 2;
    
    if ( max < 0 ) {
        max *= -1;
        wight = 1;
    }
    for ( int i = 10; div >= 1; i *= 10 ) {
        div = max / i;
        wight += 1;
    }
    
    return wight;
}

int main() {
    int minvert, maxvert, minhoriz, maxhoriz, max1, max2, max3, max4, wight, wightmax, len;
    char tab = '|';
    
    scanf("%d %d %d %d", &minhoriz, &maxhoriz, &minvert, &maxvert);
    
    max1 = maxhoriz * maxvert;
    max2 = maxhoriz * minvert;
    max3 = minhoriz * maxvert;
    max4 = minhoriz * minvert;
    
    wightmax = lenght(max1);
    if ( wightmax < lenght(max2) ) {
        wightmax = lenght(max2);
    }
    if ( wightmax < lenght(max3) ) {
        wightmax = lenght(max3);
    }
    if ( wightmax < lenght(max4) ) {
        wightmax = lenght(max4);
    }
    
    wightmax += 1;
    
    if ( lenght(maxvert) > lenght(minvert) ) {
        wight = lenght(maxvert) + 2;
    } else {
        wight = lenght(minvert) + 2;
    }
    
    printf("%*c", wight+1, tab);
    
    for ( int col = minhoriz; col < maxhoriz; col++ ) {
        printf("%*d", wightmax, col);
    }
    printf("%*d\n", wightmax, maxhoriz);
    
    for ( int i = 1; i <= wight; i++ ) {
        printf("-");
    }
    printf("+");
    
    len = wightmax * (maxhoriz - minhoriz + 1);
    
    for ( int i = 1; i <= len; i++ ) {
        printf("-");
    }
    printf("\n");
    
    wight -= 1;
    for ( int row = minvert; row <= maxvert; row++ ) {
        printf("%*d |", wight, row);
        
        for ( int col = minhoriz; col < maxhoriz; col++ ) {
            printf("%*d", wightmax, col*row);
        }
        printf("%*d\n", wightmax, maxhoriz*row);
    }
    
    return 0;
}
