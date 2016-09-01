//Написать функцию, которая находит наибольший общий делитель.
//int gcd(int a, int b)
//Передаваемые значения больше нуля.

#include <stdio.h>

int gcd(int a, int b) {
    if ( a % b == 0 ) {
        return b;
    }
    return gcd(b, a%b);
}


int main() {
    int a = 35;
    int b = 15;
    
    printf("%d %d\n", a, b);   
    printf("%d\n", gcd(a,b));


    return 0;
}
