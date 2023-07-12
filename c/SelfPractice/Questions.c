// Write a program to claculate sum of five subject and find the percentage.
// #include<stdio.h>
// int main(){
//     int m1,m2,m3,m4,m5,s,p;
//     printf("Enter marks of first subject: ");
//     scanf("%d",&m1);
//     printf("Enter marks of second subject: ");
//     scanf("%d",&m2);
//     printf("Enter marks of third subject: ");
//     scanf("%d",&m3);
//     printf("Enter marks of forth subject: ");
//     scanf("%d",&m4);
//     printf("Enter marks of fifth subject: ");
//     scanf("%d",&m5);
//     s = m1+m2+m3+m4+m5;
//     printf("Total marks obtained %d\n",s);
//     p = (s*100)/500;
//     printf("Percentage Obtained: %d\n",p);
//     return 0;
// }
// ///////////////////////////////////////////////
// Write a program to calculate area of circle.
// #include<stdio.h>
// int main(){
//     int r,a,l,b,s;
//     printf("Enter the value of radius: ");
//     scanf("%d",&r);
//     a = 3.14*r*r;
//     printf("Area of the circle of radius %d is %d\n",r,a);
//     printf("Enter the value of length and breadth of the ractangle: ");
//     scanf("%d %d",&l,&b);
//     a = l*b;
//     printf("Area of the rectangle of length %d and breadth %d is %d\n",l,b,a);
//     printf("Enter the value of side of square: ");
//     scanf("%d",&s);
//     a = s*s;
//     printf("Area of the square of side %d is %d",s,a);
//     return 0;
// }
// ///////////////////////////////////////////////////
// Write a program to calculate area of scalen triangel.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int s1,s2,s3;
//     printf("Enter the value of side1: ");
//     scanf("%d",&s1);
//     printf("Enter the value of side2: ");
//     scanf("%d",&s2);
//     printf("Enter the value of side3: ");
//     scanf("%d",&s3);
//     if (s1!=s2 && s2!=s3 && s3!=s1)
//     {
//         int s,a;
//         s = (s1+s2+s3)/2;
//         a = (s*(s-s1)*(s-s2)*(s-s3));
//         printf("Area of the scalen triangel of side %d %d %d is %d",s1,s2,s3,pow(a,0.5)); 
//     }
//     else{
//         printf("Invalid Input");
//     }
//     return 0;
// }
// ///////////////////////////////////////////////////
// Write a program to Compute Simple Interest.
// #include<stdio.h>    
// int main(){
//     int p,r,t,si;
//     printf("Enter Principal Amount: ");
//     scanf("%d",&p);
//     printf("Enter rate of interest: ");
//     scanf("%d",&r);
//     printf("Enter Time: ");
//     scanf("%d",&t);
//     si = (p*r*t)/100;
//     printf("Simple interest is %d",si);
//     return 0;
// }
// //////////////////////////////////////////////////
// Write a program to swap values of two variables.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     c = a;
//     a = b;
//     b = c;
//     printf("First number is %d\n",a);
//     printf("Second number is %d\n",b);
//     // without third variable
//     // It just swap the swaped variable here. 
//     a = a-b;
//     b = a+b;
//     a = b-a;
//      printf("First number is %d\n",a);
//     printf("Second number is %d\n",b);
//     return 0;
// }
// ////////////////////////////////////////////////
// Write a program to find greatest between two numbers.
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     if(a>b){
//         printf("%d is greater than %d",a,b);
//     }
//     else
//     {
//         printf("%d is greater than %d",b,a);
//     }
//     return 0;
// }
// ///////////////////////////////////////////////
// Write a program to check for odd and even.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("%d is even",a);
//     }
//     else
//     {
//         printf("%d is odd",a);
//     }
//     return 0;
// }
// //////////////////////////////////////////////
// Write  program to find greatest number between 3 numbers.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("%d is greatest number.",a);
//     }
//     else if(b>a && b>c){
//         printf("%dis greatest number.",b);
//     }
//     else if(c>a && c>b){
//         printf("%d is greatest number.",c);
//     }
//     return 0;
// }
// ///////////////////////////////////////////////
// Write a program to check for vowel and consonent.
// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter any alphabet: ");
//     scanf("%c",&a);
//     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
//         printf("Vowel");
//     }
//     else{
//         printf("Consonent");
//     }
//     return 0;
// }
// //////////////////////////////////////////////
// Write a program to print day according to the day number entered by the user.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     switch (n)
//     {
//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;
//     default:
//         printf("Invalid Input");
//         break;
//     }
//     return 0;
// }
// /////////////////////////////////////////////
// Write a program to display 1 to n.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for (int i = 1; i<=n; i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }
// /////////////////////////////////////////////
// Write a program to display prime and not prime in a range.
// #include<stdio.h>
// int main(){
//     int n1,n2,flag;
//     printf("Enter first range: ");
//     scanf("%d",&n1);
//     printf("Enter second range: ");
//     scanf("%d",&n2);
//     for(int i=n1; i<=n2; i++){
//         if(i==2||i==1){
//                 flag=1;
//             }
//         else{
//         for(int j=2; j<i; j++){
            
//             if(i%j==0){
//                 flag=0;
//                 break;
//             }
//             else{
//                 flag=1;
//             }
//             } }
//         if (flag==1)
//         {
//             printf("%d is Prime\n",i);
//         }
//         else{
//             printf("%d is Not Prime\n",i);
//         }
//     }
//     return 0;
// }
// //////////////////////////////////
// Program to find the average of n numbers using arrays
// #include<stdio.h>
// int main(){
//     int marks[10],n,sum=0, avg;
//     printf("Enter nubers of Subjects: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; ++i){
//         printf("Enter marks of subject%d: ",i+1);
//         scanf("%d",&marks[i]);
//         sum += marks[i];
//     }
//     avg = sum/n;
//     printf("Your Average marks is %d",avg);
//     return 0;
// }
// ////////////////////////////////////////
// Area
// #include<stdio.h>
// int main(){
//     int choice;
//     printf("1: Square\n 2: Rectangle\n 3: Circle\n 4: Triangle");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         float side,area;
//         printf("Enter value of side: ");
//         scanf("%f",&side);
//         area = side*side;
//         printf("Area = %.2f",area);
//         break;
//     case 2:
//         float l,b,area;
//         printf("Enter value of length and breadth: ");
//         scanf("%f,%f",&l,&b);
//         area = l*b;
//         printf("Area = %.2f",area);
//     default:
//         printf("Invalid Input");
//         break;
//     }
// }
// /////////////////////////////////////////////////////

// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("Enter the String: ");
//     // scanf("%s",&str);
//     gets(str);
//     int l=0;
//     while(str[l]!='\0'){
//         l++;
//     }
//     // printf("%d",l);
//     // for(int i=0; str[i]!='\0'; i++){
//     //     printf("%c",str[i]);
//     // }
//     for(int i=l; i>=0; i--){
//         printf("%c",str[i]);
//     }
//     // printf(str);
//     return 0;
// }
// //////////////////////////////////////
// Reverse string by letter
// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("Enter the String: ");
//     gets(str);
//     int l=0;
//     while(str[l]!='\0'){
//         l++;
//     }
//     for(int i=l; i>=0; i--){
//         printf("%c",str[i]);
//     }
//     return 0;
// }
// ////////////////////////////////
// Reverse string by words
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = {"This is a string"};
    // printf("Enter the string: ");
    // fgets(str,20,stdin);
    // printf(str);
    int l = strlen(str);
    for(int i=l-1; i>=0; i--){
        if(str[i]==' '){
            str[i] = '\0';
            printf("%s ",&(str[i])+1);
        }
    }
    printf("%s",str);
    return 0;
} 