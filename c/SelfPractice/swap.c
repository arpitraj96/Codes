#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("After Swapping");
    printf("First number is %d\n",a);
    printf("Second number is %d",b);
    return 0;
}