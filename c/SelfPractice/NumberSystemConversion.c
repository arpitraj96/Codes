// WAP to convert decimal to binary.
// #include<stdio.h>
// int main(){
//     int num,i=0;
//     int a[50];
//     printf("Enter a decimal number: ");
//     scanf("%d",&num);
//     int num1 = num;
//     while(num>1 || num>0){
//         int r;
//         r = num%2;
//         num = num/2;
//         a[i] = r;
//         i = i+1;
//     }
//     printf("Binary of %d is ",num1);
//     for(int j=i-1; j>=0; j--){
//         printf("%d",a[j]);
//     }
//     return 0;
// }
// /////////////////////////////////////////
// WAP to convert binary to decimal
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num,num1,num2,i=0;
//     int digit;
//     int b = 0;
//     printf("Enter a binary number: ");
//     scanf("%d",&num);
//     num1 = num2 = num;
//     while(num>0){
//         num = num/10;
//         i++;
//     }
//     for(int j=0; j<i; j++){
//         digit = num1%10;
//         b = b + digit * pow(2,j);
//         num1 = num1/10;
//     }

//     printf("Decimal of %d is %d",num2,b);
//     return 0;
// }