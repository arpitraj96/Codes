#include<stdio.h>
int main(){
    int num,dnum,digit,n1=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    dnum = num;
    // Logic for Palindrome number:
    while (num!=0)
    {
        digit = num%10;
        num/=10;
        n1 = (n1*10)+digit;
    }
    printf("Reverse: %d\n",n1);
    // Ternery Operator ---->   test condition? expression1 (if true): expression2 (if false);
    (n1==dnum)?printf("%d is a Palindrome number",dnum):printf("%d is not a Palindrome number",dnum);
    return 0;
}
