#include <stdio.h>
#include <math.h>

int reverseInteger(int);

int reverseInteger(int n) {
    int rev=0;//reverse integer
    int nd=0;//no. of digits
    while(n!=0) {
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return (rev);

}
int main() {
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    int r=reverseInteger(num);
    printf("The reverse integer is %d",r);
    return (0);
}
