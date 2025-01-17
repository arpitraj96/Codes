// // WAP to Matrix Multiplication
// #include<stdio.h>
// int main(){
//     int r1,r2,c1,c2;
//     printf("Enter number of rows and columns for 1st Matrix: ");
//     scanf("%d,%d",&r1,&c1);
//     printf("Enter number of rows and columns for 2nd Matrix: ");
//     scanf("%d,%d",&r2,&c2);
//     if(c1==r2){
//         int mat1[r1][c1];
//         int mat2[r2][c2];
//         int mmat[r1][c2];
//         printf("For 1st Matrix:\n");
//         for(int i=0; i<r1; i++){
//             for(int j=0; j<c1; j++){
//                 printf("Enter value of row%d and column%d: ",i+1,j+1);
//                 scanf("%d",&mat1[i][j]);
//             }
//         }

//         printf("For 2nd Matrix:\n");
//         for(int i=0; i<r2; i++){
//             for(int j=0; j<c2; j++){
//                 printf("Enter value of row%d and column%d: ",i+1,j+1);
//                 scanf("%d",&mat2[i][j]);
//             }
//         }

//         printf("1st Matrix:\n");
//         for(int i=0; i<r1; i++){
//             for(int j=0; j<c1; j++){
//                 printf("%d ",mat1[i][j]);
//             }
//             printf("\n");
//         }

//         printf("2nd Matrix:\n");
//         for(int i=0; i<r2; i++){
//             for(int j=0; j<c2; j++){
//                 printf("%d ",mat2[i][j]);
//             }
//             printf("\n");
//         }

//         for (int i=0; i<r1; i++){
//             for (int j=0; j<c2; j++){
//                 mmat[i][j] = 0;
//             }
//         }
//         for(int k=0; k<r1; k++){
//             for(int l=0; l<c2; l++){
//                 for(int m=0; m<c1; m++){
//                     mmat[k][l] += mat1[k][m]*mat2[m][l]; 
//                 }
//             }
//         }
//         printf("Matrix Multiplication:\n");
//         for(int i=0; i<r1; i++){
//             for(int j=0; j<c2; j++){
//                 printf("%d ",mmat[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else{
//         printf("Column of 1st matrix and Row of 2nd Matrix must be equal.");
//     }
//     return 0;
// }
// // /////////////////////////////////////////////////////////////
// // Code for Symmetric Matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter number of rows and column: ");
//     scanf("%d,%d",&r,&c);
//     int mat[r][c];
//     int tmat[c][r];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("Enter value of row%d and column%d: ",i+1,j+1);
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Matrix:\n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Transpose of the Matrix:\n");
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             tmat[i][j] = mat[j][i];
//             printf("%d ",mat[j][i]);
//         }
//         printf("\n");
//     }
//     if(r==c){
//         int flag=1;
//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 if(tmat[i][j]!=mat[i][j]){
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//         (flag==1)?printf("Symmetric"):printf("Not Symmetric");
//     }
//     return 0;
// }
// // //////////////////////////////////
// // Code for Transpose of a Matrix
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and column: ");
    scanf("%d,%d",&r,&c);
    int mat[r][c];
    int tmat[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter value of row%d and column%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix:\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            tmat[i][j] = mat[j][i];
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}
// Code for Sum of Matrix
// #include<stdio.h>
// int main(){
//     int r1,c1;
//     printf("Enter order of the matrix: ");
//     scanf("%d,%d",&r1,&c1);
//     int mat1[r1][c1];
//     int mat2[r1][c1];
//     int mat3[r1][c1];
//     printf("For 1st Matrix:\n");
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c1; j++){
//             printf("Enter element at %d%d: ",i+1,j+1);
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("1st Matrix: \n");
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c1; j++){
//             printf("%d   ",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c1; j++){
//             printf("Enter element at %d%d: ",i+1,j+1);
//             scanf("%d",&mat2[i][j]);
//         }
//     }

//     printf("2nd Matrix: \n");
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c1; j++){
//             printf("%d   ",mat2[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Sum of the Matrices: \n");
//     for(int i=0; i<r1; i++){
//         for(int j=0; j<c1; j++){
//             mat3[i][j] = mat1[i][j]+mat2[i][j];
//             printf("%d   ",mat3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// } 