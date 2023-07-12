// Functions:
//     Block of code that perform particular task
// It takes arguments and Do the work and then Returns result.
// It can be used multiple times
// It increases code reusability
// Function run in Stack Memory.
/*
// Function Prototype
 void functionName();    -->   Function Prototype
//  Function Defination
 void functionName(){
    printf("Desired work");      --> FUnction Definition
// Function Call
 int main(){
     functionName();             --> Function Call
     return 0;                   
 }
}
*/
/*
#include<stdio.h>
void printSum(); //-->Function Prototype
int main(){
    printSum(); //-->Function Call
    return 0;
}
void printSum(){  //-->Function Defination
    printf("Hello!");
}
*/

/*
// Properties
    -- Execution always starts from main
    -- A function gets called directly or indirectly from main
    -- There can be multiple functions in a program 

// Function Types:
    Library function:
        Special functions inbuilt in C
        Ex- scanf(), printf(), pow() etc
    User defined:
        Declared & defined by programmer

// Passing Arguments
    Functions can take value & give some value
    It takes parameter and then return value
    void printTable(int n);  //Here n is parameter
    void printSum(int a,int b);  //here a & b are parameters

*/
/*
// For sum
#include<stdio.h>
int Sum(int a, int b); //-->Function Prototype
int main(){
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    
    Sum(x,y); //-->Function Call
    return 0;
}
int Sum(int a, int b){  //-->Function Defination
    printf("The sum is %d",a+b);
}
*/
/*
// For Table
#include<stdio.h>
int table(int a); //-->Function Prototype
int main(){
    int x;
    printf("Enter number: ");
    scanf("%d",&x);    
    table(x); //-->Function Call
    return 0;
}
int table(int a){  //-->Function Defination
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}
*/
/*
// Argument v/s Parameter
    values that are               values in function
    passed in                     declaration &
    function call                 defination
     
    used to send value            used to receive value

    actual parameter              formal parameters  

// NOTE
    a. Function can only return one value at a time
    b. Changes to parameters in function don't change the values in calling function.
      Because a copy of argument is passed to the function
*/
/*
// Based on b.
#include<stdio.h>
void calcprice(float value);
int main(){
  float value=100.00;
  calcprice(value);
  printf("The value is %f",value);
  return 0;
}
void calcprice(float value){
  printf("Value after GST %f\n",value+(value*0.18));
}
*/
/*
// Recursion:
        When a function calls itself, it's called Recursion

*/
/*
// Print "Hello World" 5 times
#include<stdio.h>
void printhw(int count);
int main(){
    printhw(5);
    return 0;
}
// Recursive function
void printhw(int count){
    if (count==0)
    {
        return;
    }
    printf("Hello World %d\n",count);
    printhw(count-1);
}
*/
/*
// Properties of Recursion:
    a. Anything that can be done with Iteration, can be done with recursion and vice-versa.
    b. Recursion can sometimes give the most simple solution.
    c. Base Case is the condition which stops recursion.
    d. Iteration has infinite loop & Recursion has stack overflow.
*/

/*
// Infinite Recursion
#include<stdio.h>
int main(){
    printf("Thois is");
    main();
}*/

#include<stdio.h>
int fac();
int main(){
    printf("%d",fac());
    return 0;
}
int fac(){
    int n,f=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        f = f*i;
    }
    return f;
}