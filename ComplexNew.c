#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

int main() {
    struct Complex z1,z2,add,sub,pro;
    printf("Enter real and imaginary parts of z1: ");
    scanf("%d%d",&z1.real,&z1.imag);
    printf("Enter real and imaginary parts of z2: ");
    scanf("%d%d",&z2.real,&z2.imag);

    printf("z1=%d+%di \n",z1.real,z1.imag);
    printf("z2=%d+%di \n",z2.real,z2.imag);

    //adding
    add.real=z1.real+z2.real;
    add.imag=z1.imag+z2.imag;
    printf("Sum is %d+%di \n",add.real,add.imag);

    //subtracting
    sub.real=z1.real-z2.real;
    sub.imag=z1.imag-z2.imag;
    printf("Difference is %d+%di \n",sub.real,sub.imag);

    //multiplying
    pro.real=(z1.real*z2.real)-(z1.imag*z2.imag);
    pro.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
    printf("Product is %d+%di \n",pro.real,pro.imag);

    return 0;
}
