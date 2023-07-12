#include<stdio.h>
int fact(int x);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int cnum = num;
    int digit;
    int sum = 0;
    while (num)
    {
        digit = num%10;
        sum += fact(digit);
        num /= 10;
    }
    if(cnum==sum){
        printf("Number is Krishnamurty number");
    }
    else{
        printf("Not a Krishnamurty number");
    }
    return 0;
}
int fact(int x){
    int f = 1;
    for(int i=x; i>=1; i--){
        f *= i;
    }
    return f;
}