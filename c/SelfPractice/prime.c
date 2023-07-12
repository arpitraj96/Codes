// #include<stdio.h>
// int main(){
//     int r1,r2,i;
//     printf("Enter range 1: ");
//     scanf("%d",&r1);
//     printf("Enter range 2: ");
//     scanf("%d",&r2);
//     i = r1;
//     while (i>=r1 && i<=r2)
//     {
//         if(i%2==0){
//             printf("%d is an Even number\n",i);
//         }
//         else{
//             printf("%d is an Odd number\n",i);
//         }
//         i = i+1;
//     }
    
// }
// WAP to compute sum of first n natural numbers or sum of all numbers upto a even number
// #include<stdio.h>
// int main(){
//     int n,i,sum;
//     i = 1;
//     sum = 0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         sum = sum+i;
//         i++;
//     }
//     printf("Sum upto %d natural number is %d",n,sum);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,sum;
//     i = 1;
//     sum = 0;
//     while(1){
//         printf("Value of i is %d\n",i);
//         sum = sum+i;
//         if(sum%2==0){
//             printf("Sum upto even number is %d",sum);
//             break;
//         }
//         else{
//             i++;
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int b,h,area;
//     b = 4;
//     h = 6;
//     area = (1.0/2)*b*h;
//     printf("%d",area);
//     return 0;
// }




#include<stdio.h>
#include<stdlib.h>
#include "customString.h"

int main() {
    char chr[15];

    printf("Enter name: ");
    scanf("%s", &chr);

    // printf("Length of the string is %d", i);
    // printf("Length: %d", length(chr));

    // for (int i = 0; i < length(chr); i++){
    //     printf("%c\n", chr[i]);
    // }

    printf("%d", length(chr));
}


