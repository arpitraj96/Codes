// // WAP to find the largest of three numbers using user defined function
// #include<stdio.h>
// int largest(int a, int b, int c);
// int main(){
//     int n1,n2,n3;
//     printf("Enter 3 number: ");
//     scanf("%d,%d,%d",&n1,&n2,&n3);
//     // printf("%d%d%d",n1,n2,n3);
//     largest(n1,n2,n3);
//     return 0;
// } 
// int largest(int a, int b, int c){
//     if(a>=b && a>=c){
//         printf("%d is the largest number.",a);
//     }
//     else if(b>=a && b>=c){
//         printf("%d is the largest number.",b);
//     }
//     else if(c>=a && c>=b){
//         printf("%d is the largest number.",c);
//     }
// }
// ////////////////////////////////////////////////////////
// // WAP to calculate factorial of a number using recursion.
// #include<stdio.h>
// int fact(int num);
// int main(){
//     int n;
//     printf("Enter the number for finding the factorial: ");
//     scanf("%d",&n);
//     printf("Factorial of %d is %d",n,fact(n));
//     return 0;
// }
// int fact(int num){
//     if(num==1){
//         return 1;
//     }
//     else{
//         return num*fact(num-1);
//     }
//     }
// ///////////////////////////////////////////////////////
// // WAP to calculate the exponent using recursion.
// #include<stdio.h>
// int expe(int a,int b);
// int main(){
//     int num,pow;
//     printf("Enter the number and power: ");
//     scanf("%d,%d",&num,&pow);
//     printf("%d",expe(num,pow));
//     return 0;
// }
// int expe(int a, int b){
//     if(b==1){
//         return a;
//     }
//     else{
//         return a*expe(a,b-1);
//     }
// }
// ///////////////////////////////////////////////////////
// // WAP to display fibonacci by recursion.
// #include<stdio.h>
// int fib(int n);
// int main(){
//     int t,n = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d",&t);
//     for(int i=1; i<=t; i++){
//         printf("%d\t",fib(n));
//         n++;
//     }
//     return 0;
// }
// int fib(int n){
//     if(n==1 || n==0 ){
//         return n;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }
// ///////////////////////////////////////////
// // WAP to swap two numbers using functions.
// #include<stdio.h>
// int as[2];
// int swap(int a, int b);
// int main(){
//     int n1,n2;
//     printf("Enter first number: ");
//     scanf("%d",&n1);
//     printf("Enter second number: ");
//     scanf("%d",&n2);
//     printf("Before Swapping:\n");
//     printf("First number: %d\nSecond number: %d\n",n1,n2);
//     printf("After swapping:\n");
//     swap(n1,n2);
//     printf("First number: %d\nSecond number: %d\n",as[0],as[1]);
//     printf("%d  %d",n1,n2);
//     return 0;
// }
// int swap(int a, int b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     as[0] = a;
//     as[1] = b;
// }
// ///////////////////////////////////////////////////
// // WAP to add two numbers using pointers.
// #include<stdio.h>
// int main(){
//     int n1,n2;
//     printf("Enter two numbers: ");
//     scanf("%d,%d",&n1,&n2);
//     int *ptr1 = &n1;
//     int *ptr2 = &n2;
//     int a = *ptr1+*ptr2;
//     printf("Sum of the two numbers is %d",a);
//     return 0;
// }
// ///////////////////////////////////////////////////
// // WAP to Swap numbers using cyclic order using call by reference.
// #include<stdio.h>
// int cyclicSwap(int *a,int *b,int *c);
// int main()
// {
// int a, b, c;
// printf("Enter a, b and c respectively: ");
// scanf("%d,%d,%d",&a,&b,&c);
// printf("Before Swapping:\n");
// printf("First number: %d\nSecond number: %d\nThird number: %d\n",a,b,c);
// printf("After Swapping:\n");
// cyclicSwap(&a, &b, &c);
// printf("First number: %d\nSecond number: %d\nThird number: %d\n",a,b,c);
// return 0;
// }
// int cyclicSwap(int *a,int *b,int *c)
// {
// int temp;
// temp = *b;
// *b = *a;
// *a = *c;
// *c = temp;
// }
// ///////////////////////////////////////////////////
// WAP to count digit in a given number using recursion.
// #include<stdio.h>
// int cdi(int num);
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     printf("Number of digit is %d.",cdi(n));
//     // printf("%d",n/10);
//     return 0;
// }
// int cdi(int num){
//     static int c=0;
//     if(num>0){
//         c++;
//         cdi(num/10);
//     }
//     else{
//         return c;
//     }
// }