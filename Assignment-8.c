#include <stdio.h>
int main() {
    int a,b,c;
    int *p,*q;

    printf("Enter the first number=");
    scanf("%d",&a);
    printf("Enter the second number=");
    scanf("%d",&b);

    p=&a;
    q=&b;

    c=*p;
    *p=*q;
    *q=c;

    printf("After swapping:1st number=%d,2nd number=%d",a,b);
    return 0;
}
