/*
// Instructions
These are statements in a Program.
Types:
  Type Declaration Instructions:
        Declare variable before using it
  Arithmetic Instructions
        Single variable on the LHS
  Control Instructions
*/


// Type Declaration Instructions:
/*
#include<stdio.h>
int main(){
    int a = 4;
    int b = a;
    int c = b*2;
    int d = 1, e;

    int old_age = 17;
    int years = 4;
    int new_age = old_age+years;
    
    int x,y,z;
    x = y = z = 4;
    return 0;
}
*/


// Arithmetic Instruction:
/*
#include<stdio.h>
#include<math.h>
int main(){
  int a = 2, b = 4;
  int sum = a+b;
  int sub = a-b;
  int mul = a*b;
  int div = a/b;
  int modulo = a%b;
  // int b+c = a;
  int power = pow(a,b);
  printf("Sum = %d,Sub = %d,Mul = %d,Div = %d,Power = %d,Modulo =%d",sum,sub,mul,div,power,modulo);

  return 0;
}
*/


/*
Type Conversion:
    int operation int -- int
    int operation float -- float
    float operation float -- float
*/

/*
#include<stdio.h>
int main(){
  printf("%d\n",16/2);
  printf("%f\n",19/2.0);
  printf("%f\n",16/4.0);
  printf("%d\n",(int)16/3);
  return 0;
}

#include<stdio.h>
int main(){
  int a = 1.999999999;
  printf("%d\n",a);
  return 0;
}
*/


/*
// Operator Precedence

1. *, /, %               x = 4 + 9 * 10

2. +, -                  x = 4 * 3 / 6 * 2    

3. = (Assingment Operator)

// Associativity (for same precedence)

Left to Right

x = 4 * 3 / 6 * 2 = 4
*/

/*
#include<stdio.h>
int main(){
  int a = 4+9*10;
  printf("a = %d \n",a);
  int b = 4*3/6*2;
  printf("b = %d\n",b);
  int c = 5*2-2*3;
  int d = 5*2/2*3;
  int e = 5*(2/2)*3;
  int f = 5+2/2*3;
  printf("c = %d\nd = %d\ne = %d\nf = %d\n",c,d,e,f);
  return 0;
}
*/


/*
Control Instructions

Used to determine flow of program

a. Sequence Control
b. Decision Control (if/else)
c. Loop Control (for loop/while loop)
d. Case Control 
*/

/*
// Operators:
    a. Arithmetic Operators (+,-,*,/,%)
    b. Relational Operators (==,>,>=,<,<=,!=)
    d. Bitwise Operators 
    c. Logical Operators:
        && AND
        || OR
        !  not
    e. Assignment Operators (=,+=,-=,*=,/=,%=) {a=(a+b)}==(a+=b)
    f. Ternary Operator
*/

/*
#include<stdio.h>
int main(){
  printf("%d\n",4==3);
  printf("%d\n",4==4);
  printf("%d\n",4>3);
  printf("%d\n",4>4)
  printf("%d\n",4>=3);
  printf("%d\n",4<4);
  printf("%d\n",4<3)
  printf("%d\n",4<=3);
  // printf("%d\n",4!3); //It gives error
  printf("%d\n",4!=3);
  return 0;
}
*/

/*
// Logical Operator
#include<stdio.h>
int main(){
  printf("%d\n",3>4 && 5>2);
  printf("%d\n",3>4 || 5>2);
  printf("%d\n", !(5>2));
  return 0;
}
*/

/*
// Operator Precendence
Priority    Operator
  1            !
  2          *, /, %
  3           +, -
  4        <, <=, >, >=
  5          ==, !=
  6            &&
  7            ||
  8            =
*/