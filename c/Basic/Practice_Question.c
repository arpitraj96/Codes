/*
// 1. Write a program to calculate area of a square.
#include<stdio.h>
int main(){
    float side;
    printf("Enter value of side: ");
    scanf("%f",&side);
    printf("Area of the square is: %f",side*side);
    return 0;
}
*/

/*
// 2. Write a program to calulate area of a circle.
#include<stdio.h>
int main(){
    float rad;
    printf("Enter value of Radius: ");
    scanf("%f",&rad);
    printf("Area of circle is: %f",3.14*rad*rad);
    return 0;
}
*/

/*
// 3.
#include<stdio.h>
int main(){
  int a = 1.999999999;
  printf("%d\n",a);
  return 0;
}
*/

/*
// 4. 
#include<stdio.h>
int main(){
  int a = 4+9*10;
  printf("a = %d \n",a);
  int b = 4*3/6*2;
  printf("b = %d\n",b);
  int c = 5*2-2*3;
  int d = 5*2/2*3;
  int e = 5*(2/2)*3;
  int f = 5+2/2*3;
  printf("c = %d\nd = %d\ne = %d\nf = %d\n",c,d,e,f);
  return 0;
}
*/

/*
// 5. Write a program to check if a number is divisible by 2 or not.
#include<stdio.h>
int main(){
  // Divisible -> 1
  // Not Divisible -> 0
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int rem = num%2;
  printf("%d",rem==0);
  return 0;
}
*/

/*
// 6. Write a program to check if a number is odd or even.
#include<stdio.h>
int main(){
  // Even -> 1
  // Odd -> 0
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int rem = num%2;
  printf("%d",rem==0);
  return 0;
}
*/
/*
// 7. Print 1(true) or 0(false) for following statements:
a. If it's sunday & it's snowing -> True
b. If it's monday & it's raining -> True
c. If a number is greater than 9 & less than 100 -> True   (2 digit number)
*/
/*
#include<stdio.h>
int main(){
  int isSunday;
  int isSnowing;
  printf("Is today Sunday(0,1): ");
  scanf("%d",&isSunday);
  printf("Is today Snowing(0,1): ");
  scanf("%d",&isSnowing);
  printf("%d\n",isSunday&&isSnowing);
  int isMonday;
  int isRaining;
  printf("Is today Monday(0,1): ");
  scanf("%d",&isMonday);
  printf("Is today Raining(0,1): ");
  scanf("%d",&isRaining);
  printf("%d\n",isMonday&&isRaining);
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("%d",num>9&&num<100);
  return 0;
}
*/
/*
// 13. Print the  numbers from 0 to 10.
#include<stdio.h>
int main(){
  for(int i=0; i<=10; i++){
    printf("%d ",i);
  }
  return 0;
}
*/
// 14. Print the numbers from 0 to n, if n is given by user
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i =0;
    while(i<=n) 
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
*/
// 15. Print the sum of first n natural numbers.
/*
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  int s=0,s1=0;
  for(int i=1; i<=n; i++){
    s = s+i;
  }
  printf("The sum of first %d natural numbers are: %d\n",n,s);
  for (int i=n; i>=1; i--){
    printf("%d ",i);
  } 
  printf("\n");
  for(int i=1,j=n; i<=n,j>=1; i++,j--){
    s1 = s1+i;
    printf("%d ",j);
  }
  printf("\nThe sum of first %d natural numbers are: %d\n",n,s1);
  return 0;
}
*/
// 16. Print the table of a number input by the user.
/*
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number for table: ");
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    printf("%d x %d = %d \n",n,i,n*i);
  }
  return 0;
}
*/
// 17. Keep taking numbers as input from user until user enters an odd number.
/*
#include<stdio.h>
int main(){
  int n;
  for(int i=1;;i++){
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2!=0)
    {
      printf("You entered a odd number");
      break;
    }
    
  }
  return 0;
}
*/
// 18. Keep taking numbers as input from user until user enters a number which is multiple of 7.
/*
#include<stdio.h>
int main(){
  int n;
  for(int i=1;;i++){
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%7==0)
    {
      printf("You entered a number that is multiple of 7.");
      break;
    }
    
  }
  return 0;
}
*/
// 19. Print all numbers from 1 to 10 except for 6.
/*
#include<stdio.h>
int main(){
  for(int i=1;i<=10;i++){
   if (i==6)
   {
     continue;
   }
   printf("%d ",i);
  }
  return 0;
}
*/
// 20. Print all the odd numbers from 5 to 50.
/*
#include<stdio.h>
int main(){
    for(int i=5; i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d ",i);
    }
    printf("End");
    return 0;
}
*/
// 21. Print the factorial of a number n.
/*
#include<stdio.h>
int main(){
  int n,fac=1,i=1;
  printf("Factorial\n");
  printf("Enter the number: ");
  scanf("%d",&n);
  while(i<=n){
    fac = fac*i;
    i++;
  }
  printf("Factorial of %d is %d",n,fac);
  return 0;
}
*/
// 22. Print reverse of the table for a number n.
/*
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number for table: ");
  scanf("%d",&n);
  for(int i=10;i>=1;i--){
    printf("%d x %d = %d \n",n,i,n*i);
  }
  return 0;
}
*/
// 23. Calculate the sum of all numbers between 5 and 50.(Including 5 & 50)
/*
#include<stdio.h>
int main(){
  int s=0;
    for(int i=5; i<=50;i++){
        s = s+i;
    }
    printf("%d",s);
    return 0;
}
*/
// 27. Write 2 functions - one to print "Hello" & second to print "Good Bye".
/*
#include<stdio.h>
void printhello();
void printgoodbye();
int main(){
  printhello();
  printgoodbye();
  return 0;
}
void printhello(){
  printf("Hello\n");
}
void printgoodbye(){
  printf("Good Bye\n");
}
*/
// 28. Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
/*
#include<stdio.h>
void india();
void french();
int main(){
  char country;
  printf("Enter I for Indian and F for French?\n");
  scanf("%c",&country);
  if (country== 'i' || country== 'I')
  {
    india();
  }
  else if(country== 'f' || country== 'F'){
    french();
  }
  else
  {
    printf("Invalid Input");
    printf("Thank You");
  }
  return 0;
}
void india(){
  printf("Namaste\n");
}
void french(){
  printf("Bonjour\n");
}
*/
/*
// 29. Use library functions to calculate the square of a number given by user.
#include<stdio.h>
#include<math.h>
int main(){
  int n = 4;
  printf("%f",pow(n,2));
  return 0;
}
*/
/*
// 31. Write functions to calculate area of square, a circle & a rectangle.
#include<stdio.h>
#include<math.h>
float sq_area(float s);
float circle_area(float r);
float rec_area(float l,float b);
int main(){
  int n;
  float s,r,l,b;
  printf("Enter 1 for square, 2 for circle, 3 for rectangle: ");
  scanf("%d",&n);
  if (n==1)
  {
    printf("Enter the value of side of the square: ");
    scanf("%f",&s);
    printf("Area of square of side %f is %f",s,sq_area(s));
  }
  else if (n==2)
  {
    printf("Enter the value of radius of the circle: ");
    scanf("%f",&r);
    printf("Area of circle of radius %f is %f",r,circle_area(r));
  }
  else if (n==3)
  {
    printf("Enter the value of length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter the value of breadth of the rectangle: ");
    scanf("%f",&b);
    printf("Area of rectangle of length %f and breadth %f is %f",l,b,rec_area(l,b));
  }
  else
  {
    printf("Invalid Input");
  }
  return 0;
}
float sq_area(float s){
  return pow(s,2);
}
float circle_area(float r){
  return 3.14*pow(r,2);
}
float rec_area(float l,float b){
  return l*b;
}
*/
/*
// 32. Print "Hello World" 5 times
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
// 30. Sum of first n natural numbers.
#include<stdio.h>
int sum_n(int n);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("Sum of first %d natural numbers is %d",n,sum_n(5));
  return 0;
}
int sum_n(int n){
  if (n==1)
  {
    return 1;
  }
  else{
    return n+ sum_n(n-1);
  }
}
*/
/*
// 31. Print Factorial of n.
#include<stdio.h>
int fac(int n);
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("Factorial of %d is %d",n,fac(n));
  return 0;
}
int fac(int n){
  if(n==1){
    return 1;
  }
  else{
    return n*fac(n-1);
  }
}
*/
/*
// 32. Write a function to convert celsius to fahrenheit.
#include<stdio.h>
float cnvrt_temp(float cel);
int main(){
  float cel = 37;
  printf("Far: %f",cnvrt_temp(cel));
  return 0;
}
float cnvrt_temp(float cel){
   return cel*(9.0/5.0)+32;
  }
*/
/*
// 33. Write a function to calculate Percentage of a student from marks in science, maths & sanskrit.
#include<stdio.h>
int calc_per(int sci, int mat, int snk, int fm);
int main(){
  int sci,mat,snk,fm;
  printf("Enter your marks: ");
  scanf("%d,%d,%d",&sci,&mat,&snk);
  printf("Enter your full marks: ");
  scanf("%d",&fm);
  printf("Your percentage is: %d",calc_per(sci,mat,snk,fm));
  return 0;
}
int calc_per(int sci, int mat, int snk, int fm){
  return (((sci+mat+snk)*100)/fm);
}
*/
/*
// 34. Write a function to print n terms of the fibonacci sequence.
#include<stdio.h>
int fib(int n);
int main(){
  int n = 6;
  printf("%dth fibonacci number is %d", n, fib(n));
  return 0;
}
int fib(int n){
    if(n==0){
      return 0;
    }
    else if(n==1){
      return 1;
    }else{
      int fibnm1 = fib(n-1);
      int fibnm2 = fib(n-2);
      int fibn = fibnm1 + fibnm2;
      return fibn;
      }
}
*/
/*
// 41. Write a program to enter price of 3 items & print their final cost with gst.
#include<stdio.h>
int main(){
  float price[3];
  printf("Enter 3 Price: ");
  scanf("%f",&price[0]);
  scanf("%f",&price[1]);
  scanf("%f",&price[2]);
  printf("Total price 1: %f\n",price[0]+(0.18*price[0]));
  printf("Total price 2: %f\n",price[1]+(0.18*price[1]));
  printf("Total price 3: %f\n",price[2]+(0.18*price[2]));
  return 0;
}
*/
/*
// 42. Write a function to count the number of odd nnumbers in an array.
#include<stdio.h>
int countodd(int arr[],int n);
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  printf("%d",countodd(arr,9));
  return 0;
}
int countodd(int arr[],int n){
  int count=0;
  for(int i=0; i<n; i++){
    if(arr[i]%2!=0){
      count+=1;
    }
  }
  return count;
}
*/
/*
// 43. int arr[] = {1,2,3,4,5}
// For the given array, what will the following give?
// a. *(arr+2)  --> 3
// b. *(arr+5)  --> Error
#include<stdio.h>
int main(){
  int arr[] = {1, 2, 3, 4, 5};
  printf("%d\n",*(arr+2));
  printf("%d\n",*(arr+5));
  return 0;
}
*/
/*
// Write a function to reverse an array.
#include<stdio.h>
int revarray(int arr[],int n);
void printarr(int arr[],int n);
int main(){
  int arr[] = {1,2,3,4,5};
  revarray(arr,5);
  printarr(arr,5);
  return 0;
}
int revarray(int arr[],int n){
  for(int i=0; i<n/2; i++){
    int fval = arr[i];
    int sval = arr[n-i-1];
    arr[i] = sval;
    arr[n-i-1] = fval;
  }
}
void printarr(int arr[],int n){
  for(int i=0; i<n; i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");
}
*/
/*
// 45. Write a program to store the first n fibonacci numbers.
#include<stdio.h>
int main(){
  int n;
  printf("Enter n (n>2): ");
  scanf("%d",&n);

  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  printf("%d\t%d\t",fib[0],fib[1]);
  for(int i=2; i<n; i++){
    fib[i] = fib[i-1]+fib[i-2];
    printf("%d\t",fib[i]);
  }
  printf("\n");
  
  return 0;
}
*/
/*
// Create a 2D array, storing the tables of 2 & 3.
#include<stdio.h>
int storeTable(int arr[][10],int n, int m, int number);
int main(){
  int tables[2][10];
  int m;
  storeTable(tables,0,10,2);
  storeTable(tables,1,10,3);
  for(int i=0; i<10; i++){
    printf("%d\t", tables[0][m]);
  }
  for(int i=0; i<10; i++){
    printf("%d\t", tables[1][m]);
  }
  return 0;
}
int storeTable(int arr[][10], int n, int m, int number){
  for(int i=0; i<m; i++){
    arr[n][i]=number*(i+1);
  }
}
*/

// #include<stdio.h>
// int main(){
//   int a = 90, b = 85, c = 80;
//   float percent = (a+b+c)/3;
//   printf("Percentage = %f",percent);

//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int m1[2][2] = {{1,2}, {3,4}};
//   int m2[2][2] = {{5,6}, {7,8}};
//   int m3[2][2];
//   for (int i=0; i<2; i++){
//     for (int j=0; j<2; j++){
//       m3[i][j] = m1[i][j] + m2[i][j];
//       printf("%d ",m3[i][j]);
//     }
//     printf("\n");
//   }
// }

#include<stdio.h>
int main(){
  int a,b;
  printf("Enter two number: ");
  scanf("%d, %d",&a,&b);
  if(a == b){
    int m1[a][b];
    int m2[a][b];
    int m3[a][b];
    for(int i=0; i<a; i++){
      for(int j = 0; j<b; j++){
        scanf("%d",&m1[i][j]);
        scanf("%d",&m2[i][j]);
      }
    }
    for(int i=0; i<a; i++){
      for(int j = 0; j<b; j++){
        printf("%d %d",m1[i][j], m2[i][j]);
      }
      printf("\n");
    }
  }
}