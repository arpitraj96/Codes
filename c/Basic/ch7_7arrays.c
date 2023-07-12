/*
// Arrays
    Collection of similar data types stored at contiguous memory locations
// Syntax
    int marks[3];
    char name[10];
    float price[2];

// Input & Output
    scanf("%d",&marks[0]);
    printf("%d",marks[0]);

// Inititalization of Array
    int marks[ ] = {97, 98, 89};
    int marks[ 3 ] = {97, 98, 89};
*/
/*
#include<stdio.h>
int main(){
    int m1 = 97;
    int m2 = 98;
    int m3 = 89;

    int marks[] = {97,98,89};
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int marks[3];
    printf("Phy marks: ");
    scanf("%d",&marks[0]);
    printf("Che marks: ");
    scanf("%d",&marks[1]);
    printf("Maths marks: ");
    scanf("%d",&marks[2]);
    printf("Phy = %d, Che = %d, Maths = %d",marks[0],marks[1],marks[2]);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    float price[3]={100.0,200.0,300.0};
    // printf("Enter 3 Price: ");
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);
    printf("Total price 1: %f\n",price[0]+(0.18*price[0]));
    printf("Total price 2: %f\n",price[1]+(0.18*price[1]));
    printf("Total price 3: %f\n",price[2]+(0.18*price[2]));
    return 0;
}
*/
/*
// Pointer Arithmetic
    Pointer can be incremented & decremented
// CASE 1
    int age = 22;
    int *ptr = &age;
    ptr++;
// CASE 2
    float price = 20.00;
    float *ptr = &price;
    ptr++;
// CASE 3
    char star = "*";
    char *ptr = &star;
    ptr++;

// Pointer Arithmetic
    - We can also subtract one pointer from another
    - We can also compare 2 pointers
*/
/*
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("%p\n",&ptr);
    printf("%u\n",ptr);
    ptr++;
    printf("%p\n",&ptr);
    printf("%u\n",ptr);
    ptr--;
    printf("%p\n",&ptr);
    printf("%u\n",ptr);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *prt = &age;
    int *_prt = &_age;
    printf("Difference = %u\n",prt-_prt);
    printf("Comparision = %u\n", prt == _prt);
    return 0;
}
*/
// Array is a pointer
/*
// #include<stdio.h>
// int main(){
//     int addhar[5];
//     // input
//     int *ptr = &addhar[0];
//     // For input
//     for(int i=0; i<5; i++){
//         printf("%d index: ",i+1);
//         scanf("%d",&addhar[i]);
//     }
//     printf("Values\n");
//     // For output
//     for(int i=0; i<5; i++){
//         printf("%d index= %d\n",i+1,addhar[i]);
//     }
//     return 0;
// }
*/
/*
//Arrays as Function Argument
// Function Declration
    void printNumbers (int arr[ ], int n)   or,
    void printNumbers (int *arr, int n)
// Function Call
    printNumbers(arr, n);
*/
/*
// As array
#include<stdio.h>
void printNumber(int arr[],int n);
int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr,6);
    return 0;
}
void printNumber(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
}
*/
/*
// Array as pointer
#include<stdio.h>
void printNumber(int *arr,int n);
int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr,6);
    return 0;
}
void printNumber(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
}
*/
/*
// Multidimensional Arrays
// 2 D Arrays
    //Declare
        int arr[ ][ ] = { {1, 2}, {3, 4} };
//Access
arr[0][0]
arr[0][1]
arr[1][0]
arr[1][1]
*/
/*
#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 86;
    marks[1][0] = 94;
    marks[1][1] = 93;
    marks[1][2] = 82;
    printf("%d",marks[0][0]);
    return 0;
}
*/
// Initializing an array.
// #include <stdio.h>
// int main(){
//     int mark[5] = {19,10,8,17,9};
//     // make the value of the third element to -1
//     mark[2] = -1;
//     // make the value of the fifth element to 0
//     mark[4] = 0;
//     printf("%d\n",mark[4]);
//     printf("%d\n",mark[5-2]);
//     printf("%d\n",mark[2]);
//     printf("%d\n",mark[1]);
//     scanf("%d",&mark[4]);
//     printf("%d",mark[4]);
//     return 0;
// }
// //////////////////////////////////////////
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
// #include <stdio.h>
// int main(){
//     int value[5];
//     printf("Enter 5 integers: ");
//     // taking input and storing it in an array
//     for(int i=0; i<5; ++i){
//         scanf("%d",&value[i]);
//     }
//     printf("Displaying integers: \n");
//     // Print elements of an array
//     for(int j=0; j<5; ++j){
//         printf("%d\n",value[j]);
//     }
//   return 0;
// }
// /////////////////////////////////
// Pass arrays to a function in C
// #include<stdio.h>
// void display(int age1, int age2){
//     printf("%d\n",age1);
//     printf("%d\n",age2);
// }
// int main(){
//     int ageArray[] = {2,8,4,12};
//     // Pass second and third elements to display()
//     display(ageArray[1], ageArray[2]);
//     return 0;
// }
// ///////////////////////////////////////////////////////////
// Pass arrays to Functions
// Program to calculate the sum of array elements by passing to a function
// #include<stdio.h>
// float calsum(float num[]);
// int main(){
//     float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
//     // num Array is passed to calsum()
//     result = calsum(num);
//     printf("Result = %.2f", result);
//     return 0;
// }

// float calsum(float num[]){
//     float sum = 0.0;
//     for(int i=0; i<6; ++i){
//         sum += num[i];
//     }
//     return sum;
// }
// ///////////////////////////////////////////////
// Pass Multidimensional Arrays to a Function