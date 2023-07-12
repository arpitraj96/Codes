// // Uppercase or Lowercase
// #include <stdio.h>
// int main(){
//     char c;
//     printf("Enter any alphabet: ");
//     scanf("%c",&c);
//     if(c>='A' && c<='Z'){
//         printf("Alphabet is in Upper case.");
//     }
//     else if('a'<=c<='z'){
//         printf("Alphabet is in lower case.");
//     }
//     else{
//         printf("Invalid Input");
//     }
//     return 0;
// }
// /////////////////////////////////////////////////
// For leap Year
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d",&year);
//     if(year%400==0 || year%100!=0){
//         if (year%4==0){
//             printf("Leap Year");
//         }
//         else{
//             printf("Not a Leap Year");
//         }
//     }
//     else{
//         printf("Not a Leap Year");
//     }
//     return 0;
// }
// /////////////////////////////////////////////

// #include<stdio.h>
// int main(){
//     char c;
//     int a;
//     printf("Enter any key: ");
//     scanf("%c",&c);
//     a = c;
//     if(a>=48 && a<=57){
//         printf("This is digit");
//     }
//     else if(a>=65 && a<=92){
//         printf("This is upper case alphabet.");
//     }
//     else if(a>=97 && a<=122){
//         printf("This is lower case alphabet.");
//     }
//     else{
//         printf("This is special symbol");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int num,fact=1;
//     printf("Enter the value of num: ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         fact *= i;
//     }
//     printf("Factorial of %d is %d",num, fact);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>

// int main() {

//     // With variable
//     int a = 15, b = 3;
//     int pw1 = pow(a, b);
//     printf("%d\n", pw1);

//     // Without variable
//     int pw2 = pow(15, 3);
//     printf("%d\n", pw2);
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     long int a=0;
//     for(int i=1; i<=64; i++){
//         a = a + pow(2,i);
//     }
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a = 5, b = 3,p;
//     int c = 2, d = 3,p1;
//     p = pow(a,b);
//     p1 = pow(c,d);
//     printf("%f\n",p);
//     printf("%f\n",p1);
//     printf("%f\n",pow(5,3));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,fact,digit,sum = 0,n;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     num = n;
//     while(num!=0){
//         fact = 1;
//         digit = num%10;
//         for(int i=1; i<=digit; i++){
//             fact = fact*i;
//             sum = sum + fact;
//         }
//         num = num/10;

//     }
//     printf("Sum = %d\n",sum);
//     if (n == sum){
//         printf("Strong");
//     }
//     else{
//         printf("Not Strong");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,dig;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while (num!=0)
//     {
//         dig = num%10;
//         num = num/10;
//         printf("%d",dig);
//     }
//     printf(" is the reverse of above.");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
    // int a = 10, b = 100 % 90;
    // if (a != b)
    //     ;
    // printf("%d,%d", a, b);
    // return 0;
    // int i=1;
    // for(i=0;i=-1;i=1){
    //     printf("%d",i);
    //     if(i!=1);
        // break;
//     for(; ;){
//         printf("%d",10);
//     }
// int t = 1;
// for(int i=1; i<=10; i++){
//     printf("%d\t",t);
//     t = t+i;
// }

// }
///////////////////////////////////
#include<stdio.h>
int m();
void main(){
    int k = m();
    printf(" %d",k);
}
int m(){
    int a=5,b=9,c=999;
    int sum = a+b+c;
    printf("%d",sum);

    // printf("hello");
}