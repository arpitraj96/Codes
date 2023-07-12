// SET- 1
// 1.Write a program to calculate perimeter of rectangle.
/*
#include<stdio.h>
int main(){
    float l,b;   //Declare variable of float data type
    printf("Enter length: "); 
    scanf("%f",&l); //Take length from user 
    printf("nter breadth: ");
    scanf("%f",&b);  //Take breadth from user
    // Give desire output i.e., Perimeter of rectangle 
    printf("Perimeter of rectangle is: %f",2*(l+b));
    return 0;
}
*/
// 2.Take a number(n) from user & output its cube(n*n*n).
/*
#include<stdio.h>
int main(){
    int num; //Declare a variable num of int data type
    printf("Enter a number: ");
    scanf("%d",&num); //Take num as input from user
    printf("Cube is: %d",num*num*num); //Display cube of the number
    return 0;
}
*/
// 3.Write comments for programs 1 & 2.
//////////////////////////////////////////////
// SET- 2
// 1.Write a program to print the average of 3 numbers.
/*
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of num1, num2, num3: ");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("Average of the %d,%d,%d is: ",a,b,c);
    int sum = a+b+c;
    printf("%d",sum/3);
    return 0;
}
*/
// 2.Write a program to check if given character is digit or not.
/*
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any Character: ");
    scanf("%c",&ch);
    if (ch>='0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is not a digit",ch);
    }
    return 0;
}
*/
// 3.Write a program to print the smallest number of two.
/*
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    if(num1>=0||num1<0){
    printf("Enter second number: ");
    scanf("%d",&num2);
    }
    else
    {
         printf("Invalid Input");
       
    if(num2>=0||num2<0){
    if (num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else
    {
        printf("%d is greater than %d",num2,num1);
    }}
    else
    {
        printf("Invalid Input");
    }
    
    return 0;
}
*/
//////////////////////////////////////////////////////////
// SET- 3
// 1.Write a program to check if a given number is Armstrong number or not.
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    return 0;
}
*/
// 2.Write a program to check if the given number is a natural number.
/*
#include<stdio.h>
int main(){
     int ch;
    printf("Enter any number: ");
    scanf("%d",&ch);
    if (ch>=1)
    {
        printf("%d is a natural number.",ch);
    }
    else
    {
        printf("%d is not a natural number.",ch);
    }
    return 0;
}
*/
////////////////////////////////////////////////////////////////
// SET- 4
// 1.Print this pattern:
/*
* * * * * 
* * * * *
* * * * *
* * * * *
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    for (int i = 1; i<n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
*/
// 2.Write a program to check if a number is prime or not.

#include<stdio.h>
int main(){
    int n,flag;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n==2){
            flag=1;
            break;
        }
        else if(n%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        } 
    if (flag==1)
    {
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}

/*
// 3.Write a program to print prime numbers in a range.
#include<stdio.h>
int main(){
    int n1,n2,flag;
    printf("Enter the starting number: ");
    scanf("%d",&n1);
    printf("Enter the ending number: ");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++){
        for(int j=2; j<=i-1; j++){
        // if(i==2){
        //     flag=1;
        //     break;
        // }
        if(i%j==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        } 
    if (flag==1)
    {
        printf("%d ",i);
    }
}
    return 0;
}
*/
/////////////////////////////////////////////////////
// SET- 5
/*
// 1.Write a function to find sum of digits of a number.
#include<stdio.h>
int sumDigit(int n);
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("The sum of the digits of the number %d is %d",n,sumDigit(n));
    return 0;
}
int sumDigit(int n){
    if(n>=0 && n<=9){
        return n;
    }
    else{
        int d=0,s=0;
        d = n%10;
        s = s+d;
        n = n/10;
        return s+sumDigit(n);
    }
}
*/
/*
// 2.Write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
int sqRoot(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Square root of %d is %d",n,sqRoot(n));
    return 0;
}
int sqRoot(int n){
    return pow(n,0.5);
}
*/