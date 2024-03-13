#include <stdio.h>
int fsum(int,int *);

int fsum(int n,int arr[n]) {
    int sum=0;
    for(int i=0;i<n;i++) 
    sum+=arr[i];
    return (sum);
}

int main() {
    printf("Enter the value of n:");
    int n=0;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int s=fsum(n,a);
    printf("Sum of elements is %d",s);
    return 0;
}
