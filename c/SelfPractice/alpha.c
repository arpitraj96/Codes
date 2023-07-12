#include<stdio.h>
int main(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<=5; j++){
            if((i==0||i==5)&&(j==2||j==3||j==4||j==5)){
                printf("* ");
            }
            else if((i==1||i==4)&&(j==1)){
                printf("* ");
            }
            else if((i==2||i==3)&&(j==0||j==0)){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}