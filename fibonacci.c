#include <stdio.h>

int fibonacci(int n) {
    int first = 0;
    int second = 1;
    int result = 0;
    
    if ( n == 1 || n == -1 ) {
        return 1;
    }
    if ( n == 0 ) {
        return 0;
    }
    if ( n > 46 || n < -46 ) {
        return 0;
    }
    if ( n > 0 ) {
        for ( int i = 2; i <= n; i++ ) {
            result = second + first;
            first = second;
            second = result;
        }
        return result;
    }
    
    n *= -1;
    for ( int i = 2; i <= n; i++ ) {
        result = first - second;
        first = second;
        second = result;
    }
    return result;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", fibonacci(n));
    
    return 0;
}
