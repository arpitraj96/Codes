#include<stdio.h>

int main(){
    
    int a[2][3]  = {{1, 2, 3},{1, 2, 3}};

    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 3; col++){
            printf("%4d  ", &a[row][col]);
        }
        printf("\n");
    }

    return 0;

}