#include <stdio.h>

int gcd(int a, int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd(b, a%b);
}

int icm(int a, int b) {
    return (a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b);
}


int main() {
    int min, max, count, m, n, divisor;
    //unsigned int m, n, divisor;
    
    scanf("%d %d %u %u", &min, &max, &m, &n);
    
    divisor = icm(m, n);
    printf("%u\n", divisor);
    printf("%d\n", divisor);
    count = divisor;
    count = (min / divisor) * divisor;
    printf("%d / %d= %d\n", min, divisor, min / divisor);
    printf("%d\n", count);
    
    if ( count < min ) {
        count += divisor;
    }
    
    for ( ; count <= max; count += divisor ) {
        printf("%d\n", count);
    }
    
    //printf("%u\n", icm(m, n));
    


    return 0;
}
