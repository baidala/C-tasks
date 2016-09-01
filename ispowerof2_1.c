#include <stdio.h>

int powerOf2(int exponent) {
	return 1 << exponent;
	
}

int main() {
    int a = 3;

    printf("%d\n", powerOf2(a));

    return 0;
}
