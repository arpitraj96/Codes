// Write a program to check if a number is prime or not.

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