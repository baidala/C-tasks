#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd(b, a%b);
}

unsigned int icm(unsigned int a, unsigned int b) {
    return (a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;
    
    fscanf(in, "%u %u", &a, &b);
    fprintf(out, "%u\n", icm(a, b));
    fclose(in);
    fclose(out);
    
    return 0;
}
