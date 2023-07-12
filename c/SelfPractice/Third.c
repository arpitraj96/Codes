#include<stdio.h>
int main(){
     int r,c;
    printf("Enter number of elements you want to stored: ");
    scanf("%d",&r,&c);
    int arr[r][c];
    printf("Enter elements:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        scanf("%d",&arr[i][j]);
    }}
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           printf("%d",arr[i][j]);
        }
    }
    return 0;
}