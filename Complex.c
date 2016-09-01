#include <math.h>
#include <stdio.h>

typedef struct {
    double re, im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    //Complex temp;
    double tempRe1, tempRe2, tempIm1, tempIm2;
    
    //this->re = this->re * other.re - this->im * other.im;
    //this->im = this->im * other.re + this->re * other.im;
    
    tempRe1 = this->re * other.re;
    tempRe2 = this->im * other.im;
    tempIm1 = this->im * other.re;
    tempIm2 = this->re * other.im;
    
    this->re = tempRe1 - tempRe2;
    this->im = tempIm1 + tempIm2;
    
    //im = this->im;
    
    //this->re *= other.re;
    //im *= other.im;
    //this->re -= im;
    
    //this->im *= im;
    //re *= other.re;
    //this->im -= re;
}

Complex complexSum(Complex a, Complex b) {
    Complex sum = a;
    
    complexIncrement(&sum, b);
    return sum;
}

Complex complexDiff(Complex a, Complex b) {
    Complex diff = a;
    
    complexDecrement(&diff, b);
    return diff;
}

Complex complexProduct(Complex a, Complex b) {
    Complex prod = a;
    
    complexMultiply(&prod, b);
    return prod;
}

int complexEqual(Complex a, Complex b) {
    if ( a.re == b.re && a.im == b.im ) {
        return 1;
    } else {
        return 0;
    }
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
    	printf("%g%gi", this.re, this.im);
    } else {
    	printf("%g+%gi", this.re, this.im);
    }
}

int main() {
    Complex comp;
    Complex comp2;
    
    comp.re = 1;
    comp.im = -5;
    
    comp2.re = -3;
    comp2.im = 4;
	
	complexPrint(comp);
	printf("\n");
	complexPrint(comp2);
	printf("\n");
	
	Complex temp = complexProduct(comp, comp2);
    complexPrint(temp);
	printf("\n");
	complexMultiply(&comp, comp2);
	complexPrint(comp);
	printf("\n");

    return 0;
}
