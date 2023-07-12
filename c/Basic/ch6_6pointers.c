/*
// Pointers
    A variable that stores the memory address of another variable.
// Syntax
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
// * means value at that address known as dereference or indirection operator.
Pointer can be in int char and float format.
// "%p" is the format specifier for pointers.
// Address of constant and expression can not exsit.
// int *pointer; -------> Declaring pointer variable.
// If we not intialize the pointer variable after declring, it stores garbage value.

*/
/*
#include<stdio.h>
int main(){
    int age = 17;
    int *ptr = &age;
    // For address
    printf("For address: \n");
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    // For value
    printf("for Values: \n");
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
}
*/
#include<stdio.h>
int main(){
    // int a=5;
    // int *b=&a;
    // // int *p;
    // printf("%d\n",a);   // %u is use for unsinged integer.   Unsinged integer always store +ve value.   
    // printf("%u\n",&a);
    // printf("%u\n",b);
    // printf("%d\n",*b);
    // printf("%u\n",&b);
    // // printf("%u",*p);
    int x,y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("%d\n",&x);
    printf("%d, %u\n",*&x,&x);
    printf("%d, %u\n",*ptr, ptr);
    printf("%u, %u\n",*ptr,&ptr);
    printf("%u, %u\n",ptr,&ptr);
    printf("%d, %u\n",y,&ptr);
    return 0;
}