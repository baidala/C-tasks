// Считать из task.in два числа.
// Записать в task.out результат выполнения различных побитовых операций.
// 1&1=1
// 1|1=1
// 1^1=0
// 1<<1=2
// 1>>1=0

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "a");
    int a, b, and, or, xor, shleft, shright;
    
    fscanf(in,"%d %d", &a, &b);
    fclose(in);
    
    //printf("%d %d\n", a, b);    
    and = a&b;
    
    fprintf(out, "%d&%d=%d\n", a, b, and);
    
    or = a|b;
    fprintf(out, "%d|%d=%d\n", a, b, or);

    xor = a^b;
    fprintf(out,"%d^%d=%d\n", a, b, xor);

    shleft = a<<b;
    fprintf(out, "%d<<%d=%d\n", a,b,shleft);

    shright = a>>b;
    fprintf(out,"%d>>%d=%d\n", a,b,shright);
    //fprintf(out, );
    
    fclose(out);

    return 0;
}
