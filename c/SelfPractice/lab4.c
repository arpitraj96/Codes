// #include<stdio.h>
// int main(){
//     int i,o,esum = 0,osum = 0;
//     for(i = 1; i<=20; i++){
//         if(i%2==0){
//             esum += i;
//         }
//         else{
//             osum += i;
//         }
//     }
//     printf("Sum of the Even number till 20 is %d\n",esum);
// //     for(o = 1; o<=20; o++){
// //         if(o%2!=0){
// //             osum += o; 
// //         }
// //     }
//     printf("Sum of the Odd number till 20 is %d\n",osum);
//     return 0;
// }
// /////////////////////////////////
// Factorial
// #include<stdio.h>
// int main(){
//     int num,fact = 1;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     for(int i = 1; i<=num; i++){
//         fact = fact*i;
//     }
//     printf("Factorial of the %d is %d",num,fact);
//     return 0;
// }
// /////////////////////////////////////
// Prime Number (While loop)
// #include<stdio.h>
// int main(){
//     int num,flag,i = 2;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     while (i<num)
//     {
//         if(num==2){
//             flag = 1;
//             break;
//         }
//         else if(num%i==0){
//             flag = 0;
//             break;
//         }
//         else{
//             flag = 1;
//         }
//         i++;
//     }
//     if(flag==1){
//         printf("%d is a Prime Number",num);
//     }
//     else{
//         printf("%d is a not a Prime number",num);
//     }
//     return 0;
// }
// // Fibonacci Series 
// #include<stdio.h>
// int main(){
//   int num,d1 = 0,d2 = 1,d3 = 1;
//   printf("Enter number of iteration: ");
//   scanf("%d",&num);
//   printf("%d\n%d\n%d\n",d1,d2,d3);
//   for(int i=3; i<=num;  i++){
//       d1 = d2;
//       d2 = d3;
//       d3 = d1+d2;
//       printf("%d\n",d3);
//   }
//   return 0;
// }
// Pattern:
// #include<stdio.h>
// int main(){
//   int rows;
//   printf("Enter number of rows: ");
//   scanf("%d",&rows);
//   for(int i = rows; i>=1; i--){
//     for(int j = 1; j<=i; j++){
//       printf("%d ",j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// //////////////////////////////////////////////////
// #include <stdio.h>
// int main(){
//     char c;
//     printf("Enter any alphabet: ");
//     scanf("%c",&c);
//     if(c>='A' && c<='Z'){
//         printf("Alphabet is in Upper case.");
//     }
//     else if(c>='a' && c<='z'){
//         printf("Alphabet is in lower case.");
//     }
//     else{
//         printf("Invalid Input");
//     }
//     return 0;
// }
/////////////////////////
// GCD
// #include<stdio.h>
// int main(){
//   int num1,num2,gcd;
//   printf("Enter first number: ");
//   scanf("%d",&num1);
//   printf("ENter secind number: ");
//   scanf("%d",&num2);
//   for(int i = 1; i<=num1 && i<=num2; i++){
//     if(num1%i==0 && num2%i==0){
//       gcd = i;
//     }
//   }
//   printf("GCD of %d and %d is %d",num1,num2,gcd);
//   return 0;
// }
// LCM
// #include<stdio.h>
// int main(){
//   int num1,num2,max,lcm;
//   printf("Enter first number: ");
//   scanf("%d",&num1);
//   printf("Enter second number: ");
//   scanf("%d",&num2);
//   max = (num1>num2)?num1:num2;
//   while (1)
//   {
//     if(max%num1==0 && max%num2==0){
//       lcm = max;
//       break;
//     }
//   }
//   printf("LCM of %d and %d is %d",num1,num2,lcm);
//   return 0;
// }
// /

// #include<stdio.h>
// int main(){
//   int n;
//   int lcm[100];
//   printf("Enter the numbers: ");
//   scanf("%d",&n);
//   printf("Enter all numbers: ");
//   for (int i=1; i<=n; i++){
//     scanf("%d",&lcm[i]);
//   }
//   printf("%d, %d",lcm[1],lcm[2]);

// // } 
// #include<stdio.h>
// #define NUM 11
// void main(){
//   #if(NUM%2==0)
//   printf("Even");
//   #else
//   printf("Odd");
//   #endif
// }


// //////////////////
// #include<stdio.h>
// #define NUM 10
// void main(){
//   #ifdef NUM
//   #define NUM1 NUM + 20
//   #endif
//   #ifndef NUM
//     #define MAX 15
//   #endif
//   printf("%d",NUM1);
// }
// /////////////////////////////
// Armstrong By Unnati(While Loop)
// #include<stdio.h>
// #include<math.h>
// int main(){
//   int num,a,b;
//   float count = 0,dig,val = 0;
//   printf("Enter a number: ");
//   scanf("%d",&num);
//   a = num;
//   b = a;
//   do{
//     num = num/10;
//     ++count;
//   }while(num!=0);
//   // printf("%f",count);
//   for(int i=a; a!=0; a=a/10){
//     dig = a%10;
//     val = val+pow(dig,count);
//     // i = i/10;
//     printf("%.f ",val);
//   }
//   if(b==val){
//     printf("Armstrong");
//   }
//   else{
//     printf("Not Armstrong");
//   }
//   return 0;
// }

// #include<stdio.h>
// int main(){
//     int x = 6;
//     int n = 5;
//     int y = 12*3%5-6+7/2;
//     // printf("%d\n",x++);
//     // printf("%d %d\n",x++,++x);
//     // printf("%d  %d",n++,++n);
//     printf("%d",y);
//     return 0;
// }

// #include<stdio.h>
// void main(){
//     char a=1;
//     while(a<=255){
//         printf("\t%d",a);
//         a = a+1;
//     }
// }
// #include<stdio.h>
// int main(){
//     int a[5] = {10,5,15,12,8};
//     int max, secmax;
//     max = a[0];
//     secmax = a[1];
//     for(int i=0; i<5; i++){
//         if(a[i]>=max){
//             secmax = max;
//             max = a[i];
//         }
//         else if(a[i]>=secmax){
//             secmax = a[i];
//         }
//     }
//     printf("%d max\n",max);
//     printf("%d secmax",secmax);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i1,i2;
//     printf("Enter the intervals: ");
//     scanf("%d %d",&i1,&i2);
//     for(int i=i1; i<=i2; i++){
//         switch (i)
//         {
//         case 1:
//             printf("one\n");
//             break;
//         case 2:
//             printf("two\n");
//             break;
//         case 3:
//             printf("three\n");
//             break;
//         case 4:
//             printf("four\n");
//             break;
//         case 5:
//             printf("five\n");
//             break;
//         case 6:
//             printf("six\n");
//             break;
//         case 7:
//             printf("seven\n");
//             break;
//         case 8:
//             printf("eight\n");
//             break;
//         case 9:
//             printf("nine\n");
//             break;
//         default:
//             if(i>9 && i%2==0){
//                 printf("even\n");
//             }
//             else{
//                 printf("odd\n");
//             }
//             break;
//         }
//     }
//     return 0;
// }