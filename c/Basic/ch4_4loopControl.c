/*
// Loop Control Instructions:
    To repeat some parts of the program.
Types:
    for loop
    while loop
    do while loop
*/
// for loop
/*
#include<stdio.h>
int main(){
    // i is known as iterator or counter 
    for (int i = 1; i <=100; i++) //We can also decrease the value of i. 
    {
        printf("%d Loop is running\n",i);
    }
    
    return 0;
}
*/
// i++ (Post increment) means use then increase 
// ++i (Pre increment) means increase then use
// i-- (Post decrement) means use then decrease 
// --i (Pre decrement) means decrease then use
/*
#include<stdio.h>
int main(){
    // i is known as iterator or counter 
    for (float i = 1.0; i <=5.0; i+=0.1) //We can decrease the value of i. 
    {
        printf("%f Loop is running\n",i);
    }
    
    return 0;
}*/

// while loop
/*
#include<stdio.h>
int main(){
    int i = 1;
    // i is known as iterator or counter 
    while(i<=5) //We can decrease the value of i. 
    {
        printf("%d Loop is running\n",i);
        i++;
    }
    
    return 0;
}
*/
// do while loop
/*
#include<stdio.h>
int main(){
    int i = 5;
    do
    {
        printf("%d Loop is running.\n",i);
        i++;
    } while (i<5);
    return 0;
} 
*/
// break statement:
//     For exiting the loop
/*
#include<stdio.h>
int main(){
    for(int i=1; i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    printf("End");
    return 0;
}
*/
// continue statement:
//      skip to next iteration
/*
#include<stdio.h>
int main(){
    for(int i=1; i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }
    printf("End");
    return 0;
}
*/