#include<stdio.h>
#include<math.h>
int main(){
   int num,dnum,d2num;
   float d3num = 0,digit,p = 0;
   printf("Enter any number: ");
   scanf("%d",&num);
   dnum = num;
   d2num = num;
//    For numbers of Digit:
   while (num!=0)
   {
       num/=10;
       p++;
   }
//    Actual logic for Armstrong Number
   while(dnum!=0){
       digit = dnum % 10;
       dnum/=10;
       d3num = (pow(digit,p)) + d3num;
       // printf("Pow: %g\n", d3num); 
   }
//    Comparing initial number with calculated number:
   if(d2num == d3num){
       printf("%d is an Armstrong Number",d2num);
   }
   else{
       printf("%d is not an Armstrong Number",d2num);
   }
    return 0;
}
// //////////////////////////////////////////////
// In a given range
// #include <math.h>
// #include <stdio.h>
// int main() {
//   int l1, l2, d2num, digit, c = 0;
//   double d3num = 0.0;
//   printf("Enter two numbers(intervals): ");
//   scanf("%d,%d", &l1, &l2);
//   for (int num = l1; num < l2; ++num) {
//     d2num = num;
//     while (d2num != 0) {
//       d2num /= 10;
//       ++c;
//     }
//     d2num = num;
//     while (d2num != 0) {
//       digit = d2num % 10;
//       d3num += pow(digit, c);
//       d2num /= 10;
//     }
//     if ((int)d3num == num) {
//       printf("%d ", num);
//     }
//     c = 0;
//     d3num = 0;
//   }
//   return 0;
// }