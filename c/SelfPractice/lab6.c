// 1. Write a c program to find the largest of three numbers
// #include<stdio.h>
// int great(int a, int b, int c);
// int main(){
//     int n1,n2,n3;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&n1,&n2,&n3);
//     printf("Largest number is %d",great(n1,n2,n3));
//     return 0;
// }
// int great(int a,int b, int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// /////////////////////////////
// 2.WAP to find factorial by recursive function
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
// ////////////////////////////
// 3.WAP to display fibonacci by recursion
// #include<stdio.h>
// int fib(int n);
// int main(){
//     int t;
//     printf("Enter the number of terms: ");
//     scanf("%d",&t);
//     // printf("%d\n",fib(t));
//     fib(t);
//     return 0;
// }
// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2 || n==3){
//         return 1;
//     }
//     else{
//         int fibn1 = fib(n-1);
//         int fibn2 = fib(n-2);
//         int fibn = fibn1+ fibn2;
//         printf("%d\n",fibn);
//     }
// }
// #include<stdio.h>
// int expe(int a,int b);
// int main(){
//     printf("%d",expe(5,2));
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
// Code for Symmetric Matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter number of rows and column: ");
//     scanf("%d,%d",&r,&c);
//     int mat[r][c];
//     int tmat[c][r];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("Enter value of row%d and column%d: ",i+1,j+1);
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Matrix:\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Transpose of the Matrix:\n");
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             tmat[i][j] = mat[j][i];
//             printf("%d ",mat[j][i]);
//         }
//         printf("\n");
//     }
//     if(r==c){
//         int flag=1;
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 if(tmat[i][j]!=mat[i][j]){
//                     flag = 0;
//                     // printf("Break");
//                     break;
//                 }
//             }
//         }
//         (flag==1)?printf("Symmetric"):printf("Not Symmetric");
//     }
//     // else{
//     //     printf("Not Symmetric");
//     // }
//     return 0;
// }


//Use of Macros and header file  
// simpleinterest.c
// #include<stdio.h>
// #include"simple.h"
// int main(){
//     int p,r,t;
//     p = 100;
//     r = 5;
//     t = 2;
//     printf("Simple Interest is %d\n",SI(p,r,t));
//     printf("Amount is %d",AMT(p,r,t));
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[] = {0,1,2,3,4};
//     int b = 2;
//     int *p1 = b;
//     int *p = a;
//     printf("%d",p);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int x = 1;
//     for(int i=1; i<=4;i++){
//         for(int j=3; j>=i; j--){
//             printf(" ");
//         }
//         for(int k=1; k<=i; k++){
//             printf("%d ",x);
//             x = x+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// /////////////////////////////////////////////
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
// // /////////////////////////////////////////
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

// WAP to Tarnspose of the matrix
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and column: ");
    scanf("%d,%d",&r,&c);
    int mat[r][c];
    int tmat[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter value of row%d and column%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix:\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            tmat[j][i] = mat[j][i];
            printf("%d ",tmat[j][i]);
        }
        printf("\n");
    }
int mmat[r][r];
    for(int k=0;k<=r;k++){
        for(int l=0;l<=r;l++){
            mmat[k][l] = mat[k][l]*tmat[l][k];
        }
    }
    return 0;
}