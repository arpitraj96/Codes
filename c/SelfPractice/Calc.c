#include<stdio.h>
#include<math.h>

void company1();
void company2();
void company3();
int main(){
    int flag = 5;
    while(flag!=0){
        printf("\t\t**********WELCOME**********\n");
        printf("1. Company 1\n");
        printf("2. Company 2\n");
        printf("3. Company 3\n");
        printf("\t\t***************************\n");
        int com;
        printf("Enter your choice: ");
        scanf("%d",&com);
        switch (com)
        {
        case 1:
            company1();
            break;
        case 2:
            company2();
            break;
        case 3:
            company3();
            break;
        default:
            printf("Invalid Input");
            break;
        }
        printf("Want to terminate PRESS 0 else PRESS 1: ");
        scanf("%d",&flag);
    }
    return 0;
}
void company1(){
    printf("Company 1\n");
    float loanAmt;
    int years;
    printf("Enter the loan amount: ");
    scanf("%f",&loanAmt);
    printf("Enter the time period: ");
    scanf("%d",&years);
    float si = (loanAmt*10.9*years)/100;
    float amt = si+loanAmt;
    printf("Interest: %.2f\n",si);
    printf("Total number of Installment: %d\n",years*12);
    printf("Total Amount: %.2f\n",amt);
    float perMonth = amt/(years*12);
    printf("Payment per installment: %.2f\n",perMonth);
    printf("\t\t***************************\n");
}
void company2(){
    printf("Company 2\n");
    float loanAmt;
    int years;
    printf("Enter the loan amount: ");
    scanf("%f",&loanAmt);
    printf("Enter the time period: ");
    scanf("%d",&years);
    float si = (loanAmt*12*years)/100;
    float amt = si+loanAmt;
    printf("Interest: %.2f\n",si);
    printf("Total number of Installment: %d\n",years*12);
    printf("Total Amount: %.2f\n",amt);
    float perMonth = amt/(years*12);
    printf("Payment per installment: %.2f\n",perMonth);
    printf("\t\t***************************\n");
}
void company3(){
    printf("Company 3\n");
    float loanAmt;
    int years;
    printf("Enter the loan amount: ");
    scanf("%f",&loanAmt);
    printf("Enter the time period: ");
    scanf("%d",&years);
    float si = (loanAmt*13*years)/100;
    float amt = si+loanAmt;
    printf("Interest: %.2f\n",si);
    printf("Total number of Installment: %d\n",years*12);
    printf("Total Amount: %.2f\n",amt);
    float perMonth = amt/(years*12);
    printf("Payment per installment: %.2f\n",perMonth);
    printf("\t\t***************************\n");
}