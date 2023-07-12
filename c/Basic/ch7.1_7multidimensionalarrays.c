// Multi-Dimensional
// #include<stdio.h>
// int main(){
//     int multi[2][3] = {{0,1,3},{2,4,6}};
//     printf("%d",multi[1][2]);
//     return 0;
// }
// //////////////////////////////////
// C program to store temperature of two cities of a week and display it.
// #include<stdio.h>
// const int city = 2;
// const int week = 7;
// int main(){
//     int temp[city][week];
//     // Using nested loop to store values in a 2D array
//     for(int i=0; i<city; ++i){
//         for(int j=0; j<week; ++j){
//             printf("City %d, Day %d: ", i+1, j+1);
//             scanf("%d",&temp[i][j]);
//         }
//     }
//     printf("\nDisplaying values: \n\n");
//     // Using nested loop to display values of a 2D array
//     for(int i=0; i<city; ++i){
//         for(int j=0; j<week; ++j){
//             printf("City %d, Day %d = %d\n", i+1, j+1, temp[i][j]);
//         }
//     }
//     return 0;
// }
// ////////////////////////////////////
//  Transpose of a matrix
#include<stdio.h>
int main(){
    int row,column;
    printf("Enter value of row and column: ");
    scanf("%d,%d",&row,&column);
    int Matrix[row][column];
    // Using nested loop to store values in a 2D array
    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j){
            printf("row %d, column %d: ", i+1, j+1);
            scanf("%d",&Matrix[i][j]);
        }
    }
    printf("Displaying the matrix: \n\n");
    for(int i=0; i<column; ++i){
        for(int j=0; j<row; ++j){
            // printf("row %d, column %d = %d\n", i+1, j+1, Matrix[j][i]);
            printf("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nDisplaying values After transposing: \n\n");
    // Using nested loop to display values of a 2D array
    for(int i=0; i<column; ++i){
        for(int j=0; j<row; ++j){
            // printf("row %d, column %d = %d\n", i+1, j+1, Matrix[j][i]);
            printf("%d\t",Matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
// // Sum of two matrices
// #include<stdio.h>
// int main(){

//     return 0;
// }