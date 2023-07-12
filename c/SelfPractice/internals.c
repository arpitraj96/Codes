// 1. WAP to display diamond pattern
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of row: ");
//     scanf("%d",&r);
//     for(int i=r; i>1; i--){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=r; k>=i; k--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=r; k>=i; k--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Wap to find duplicate elements in a array
#include<stdio.h>
int main(){
     int n;
    printf("Enter number of elements you want to stored: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int darr[n];
    for(int i=0; i<n; i++){
        darr[i] = 0;
    }
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=0; k<i; k++){
                    if(darr[k]==arr[i]){
                        flag = 1;
                        continue;
                    }
                }
                if(flag==0){
                    darr[i] = arr[i];
                }
            }
        }
        flag = 0;
    }
    printf("Duplicate elements are:\n");
    for(int k=0; k<n; k++){
        if(darr[k]!=0){
            printf("%d   ",darr[k]);
        }
    }
    return 0;
}
