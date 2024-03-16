#include <stdio.h>

typedef struct {
    int real;
    int imag;
}Complex;

void readComplex(Complex *num) {
    printf("Enter real part:");
    scanf("%d",&num->real);
    printf("Enter imaginary part:");
    scanf("%d",&num->imag);
}

Complex addComplex(Complex num1,Complex num2) {
    Complex sum;
    sum.real=num1.real+num2.real;
    sum.imag=num1.imag+num2.imag;
    return sum;
}

Complex subtComplex(Complex num1,Complex num2) {
    Complex result;
    result.real=num1.real-num2.real;
    result.imag=num1.imag-num2.imag;
    return result;
}

Complex multiplyComplex(Complex num1,Complex num2) {
    Complex product;
    product.real=(num1.real*num2.real)-(num1.imag*num2.imag);
    product.imag=(num1.real*num2.imag)+(num2.real*num1.imag);
    return product;
}

int main() {
    Complex n1,n2,res;
    printf("Enter first complex number:\n");
    readComplex(&n1);
    printf("Enter second complepx number:\n");
    readComplex(&n2);
    
    //addition
    res=addComplex(n1,n2);
    printf("Sum = %d+i%d \n",res.real,res.imag);

    //subtraction
    res=subtComplex(n1,n2);
    printf("Difference = %d+i%d \n",res.real,res.imag);

    //multiplication
    res=multiplyComplex(n1,n2);
    printf("Product = %d+i%d",res.real,res.imag);

    return 0;
}
