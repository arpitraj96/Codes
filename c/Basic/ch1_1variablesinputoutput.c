/* 
Variables

Variable is the name of a memory
location which stores some data.

Rules for Variables:
1. Variables are case sensitive
2. !st character is alphabet or '_'
3. No comma/blank space
4. NO other symbol other than '_'
*/

/*
#include<stdio.h>

int main(){
    int number = 25;
    char star = '*';
    int age = 22;
    float pi = 3.14;

    int a = 30;
    int A = 40;
    int _age = 18;
    _age = 24;
    int final_price = 12;

    return 0;
}


/*
// Data Types

#include<stdio.h>    //Preprocessor Directive
int main(){
    // This code dispays how data types work in c
    int age = 18;
    float pi = 3.14;
    char hashtag = '#';
    ;
    return 0;
}
*/
/*
Constants

Values that don't change(fixed)
Types:
   Integer Constants: 1,-1,2,5,-25
   Real Constants: 1.0,2.0,-3.14,-2.4
   Character Constants: 'a','b','A','#','&'
Character Constants are always written in single quotes.
*/

/*
Keywords
Reserved words that have special meaning to the compiler

32 Keywords in C

Some example:
    int,float,char,long,if,else,break,for,while etc
*/
// C is a case sensetive Language
// '\n' For next line
/*
// Output (printf())
Cases
1. integers
printf(" age is %d ", age);
2. real numbers
printf(" value of pi is %f ", pi);
3. characters
printf(" star looks like this %c ", star);
%d,%f,%C are known as format specifier
*/
/*
#include<stdio.h>
int main(){
    // printf("Hello\n");
    // printf("Hello");
    int age = 18;
    float pi = 3.14;
    char star = '*';
    printf("Age is %d\n", age);
    printf("Value of pi is %f\n",pi);
    printf("Symbol of Astrics is %c\n",star);
    return 0;
}
*/
// Input (scanf())
/*
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your age is %d",age);
    return 0;
}
*/
// Program to add two number
/*
#include<stdio.h>
int main(){
    int a,b,sum,mul,div,sub;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    sum = a+b;
    mul = a*b;
    div = a/b;
    sub = a-b;
    printf("Sum is: %d\n",sum);
    printf("Difference is: %d\n",sub);
    printf("Multiplication is: %d\n",mul);
    printf("Division is: %d\n",div);
    return 0;
}
*/