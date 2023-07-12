/*
// Conditional Statements:
    if-else
    switch
*/
/*
#include<stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Adult\n");
        printf("You can vote.\n");
    }
    else if (age>=13&&age<18)
    {
        printf("Teenager\n");
        printf("You can not vote.\n");
    }
    
    else
    {
        printf("Child\n");
    }
    printf("Thank You");
    return 0;
} 
*/

// Conditional Operators (Ternary)
// condition?doSomething if TRUE:doSomething if FALSE;
/*
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    age>=18?printf("Adult"):printf("Not Adult");
    return 0;
}
*/
// Switch
/*
#include<stdio.h>
int main(){
    int day;
    printf("Enter Day: ");
    scanf("%d",&day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}
*/