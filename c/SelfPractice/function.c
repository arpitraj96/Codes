#include<stdio.h>
int fact(int num); //Function Prototype/Declaration
void a();
void b(int a);
int main(){
    int num = 5;
    fact(num);      //Function Calling
    printf("%d\n",fact(num));
    a();
    b(5);
    return 0;
}
int fact(int num){                 //Function with return value and with arguments.
    int fa = 1;
    for(int i=1; i<=num; i++){         //Function Definition
        fa = fa*i;
    }
    return fa;
}
void a(){           //Function without return value and without arguments.
    printf("This is a function with no return datatype/value and without any arguments.\n");
}
void b(int a){       //Function without return value but with arguments.
    printf("Value = %d\n",a);
    printf("This is a function without return datatype but, with arguments");
}