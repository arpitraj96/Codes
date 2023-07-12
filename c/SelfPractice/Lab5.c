// WAP to check whether the given number is strong number or not:
// #include<stdio.h>
// int main(){
//     int num,fact,digit,sum = 0,n;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     n = num;
//     while(num>0){
//         fact = 1;
//         digit = num%10;
//         for(int i=1; i<=digit; i++){
//             fact = fact*i;
//         }
//         sum = fact+sum;
//         num = num/10;
//     }
//     if (n == sum){
//         printf("Strong");
//     }
//     else{
//         printf("Not Strong");
//     }
//     return 0;
// }
// WAP to display the 'n' terms of odd natural number & their sum:
// #include<stdio.h>
// int main(){
//     int o,osum = 0;
//     int n;
//     printf("Enter number: ");
// for(o = 1; o<=20; o++){
//         if(o%2!=0){
//             printf("%d  ",o);
//             osum += o; 
//         }
//     }
//     printf("Sum of the Odd number till 20 is %d\n",osum);
//     return 0;
// }
// /////////////////////////
// * 
// * *
// * * *
// * * * *
// * * * * *
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of Row: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// WAP to check whether a given number is perfect or not:
// #include<stdio.h>
// int main(){
//     int num,sum = 0;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     for(int i=1; i<num; i++){
//         if(num%i==0){
//             printf("%d ",i);
//             sum = sum+i;
//         }
//     }
//     printf("\n");
//     printf("%d\n",sum);
//     if(num==sum){
//         printf("%d is Perfect number",num);
//     }
//     else{
//         printf("%d is not a perfect number",num);
//     }
//     return 0;
// }
// //////////////////////
// #include<stdio.h>
// int main(){
//     int r,sum=1;
//     printf("Enter number of row: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         // sum = sum+i;
//         for(int j=1; j<=i; j++){
//             // sum = sum+j;
//             printf("%d ",sum);
//             sum = sum+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////
/*
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * * 
    * * * * *
      * * *
        *
*/
// #include <stdio.h>
// int main() {
//    int i, space, rows,rrows, s = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    rrows = rows/2;
//    for (i = 1; i <= rrows; i++, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    for (i = rrows-1; i >= 1; i--, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    return 0;
// }
// #include<stdio.h>
// int main(){
//   int a=4;
//   printf("%d\n",a+1);
//   printf("%d",a<<1);
//   return 0;
// }
#include<stdio.h>
int main(){
  printf("Hello World!");
  return 0;
}