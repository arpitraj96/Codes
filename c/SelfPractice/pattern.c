/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of Row: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ///////////////////////////////////
/*
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15
*/
// #include<stdio.h>
// int main(){
//     int r,sum=1;
//     printf("Enter number of row: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         // sum = sum+i;
//         for(int j=1; j<=i; j++){
//             // sum = sum+j;
//             printf("%d ",sum);
//             sum = sum+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////
/*
 *
 * * *
 * * * * *
 * * * * * * *
 * * * * * * * * *
 * * * * * * *
 * * * * *
 * * *
 *
 */
// #include<stdio.h>
// int main() {
//    int i, space, rows,rrows, s = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    rrows = rows/2;
//    for (i = 1; i <= rrows; i++, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    for (i = rrows-1; i >= 1; i--, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    return 0;
// }
// //////////////////////
/*
  5 4 3 2 1
  5 4 3 2
  5 4 3
  5 4
  5
*/
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=r; j>=i; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ////////////////////
/*
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
*/
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     for(int i=r; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ////////////////////////////////
/*
  5 4 3 2 1 
  5 4 3 2
  5 4 3
  5 4
  5
*/
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     for(int i=1; i<=r; i++){
//         for(int j=r; j>=i; j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ///////////////
/*
  A
  B C
  D E F
  G H I J
  K L M N O
*/
// #include<stdio.h>
// int main(){
//     int r,v;
//     char ch;
//     printf("Enter the letter: ");
//     scanf("%c",&ch);
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     v = ch;
//     for(int i=1;i<=r;i++){
//         for(int j=1; j<=i; j++){
//             printf("%c ",v);
//             v++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////////
/*
  A
  B B
  C C C
  D D D D
  E E E E E
*/
// #include<stdio.h>
// int main(){
//     int r,v;
//     char ch;
//     printf("Enter the letter: ");
//     scanf("%c",&ch);
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     v = ch;
//     for(int i=1;i<=r;i++){
//         for(int j=1; j<=i; j++){
//             printf("%c ",v);
//         }
//         v++;
//         printf("\n");
//     }
//     return 0;
// }
// ///////////////////////////
/* Reverse Floyd's Triangle
  15 14 13 12 11
  10 9 8 7
  6 5 4
  3 2
  1
*/
// #include<stdio.h>
// int main(){
//     int r,v;
//     printf("Enter number of row: ");
//     scanf("%d",&r);
//     v = r*((r+1)/2);
//     for(int i=r; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf("%d ",v);
//             v = v-1;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ///////////////////////
/*
    *        
   * *      
  *   *
 *     *
*********
*/
// #include<stdio.h>
// int main(){
//     int n, x, y, s;
//     printf("Enter number of rows to show the star pattern: ");
//     scanf("%d",&n);
//     for(x = 1; x <= n; x++){
//     //for loop to put space in pyramid
//     for (s = x; s < n; s++)
//         printf(" ");      //for loop to print star
//     for(y = 1; y <= (2 * n - 1); y++){
//           if(x == n || y == 1 || y == 2 * x - 1)
//                 printf("*");
//           else
//                 printf(" ");
//     }
//     //ending line after each row
//     printf("\n");
//     }
//     return 0;
// }
// /////////////////////////
/*
  * * * * * 
  *       *
  *       *
  *       *
  * * * * *
*/
// #include <stdio.h>
// int main()
// {
//   int num;
//   printf("Enter the number: ");
//   scanf("%d", &num);
//   for (int i = 1; i <= num; i++)
//   {
//     for (int j = 1; j <= num; j++)
//     {
//       if (i == 1 || i == num || j == 1 || j == num)
//       {
//         printf("* ", num);
//       }
//       else
//       {
//         printf("  ", num - i);
//       }
//     }
//     printf("\n");
//   }
// }
// ////////////////////////
/*
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * * 
    * * * * *
      * * *
        *
*/
// #include <stdio.h>
// int main() {
//    int i, space, rows,rrows, s = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    rrows = rows/2;
//    for (i = 1; i <= rrows; i++, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    for (i = rrows-1; i >= 1; i--, s = 0) {
//       for (space = 1; space <= rrows - i; space++) {
//          printf("  ");
//       }
//       while (s != 2 * i - 1) {
//          printf("* ");
//          s++;
//       }
//       printf("\n");
//    }
//    return 0;
// }
// /////////////////////////
/*
    1
   123
  12345
   123
    1
*/
// #include <stdio.h>   
// int main()  
// {  
//     // declare the local variables  
//     int i, j, rows, k;  
//     printf (" Enter a number to define the rows: ");  
//     scanf("%d", &rows);  
//     int space = rows-1, num=1;  
//     printf("\n");  
//     for (i = 1; i <= rows; i++)  
//     {  
//         for (j = 1; j <= space; j++)   
//         {  
//             printf(" ");   
//         }  
//         for ( k= 1; k <= num; k++)  
//         {  
//             printf("%d", k);  
//         }  
//         if(space > i)  
//         {  
//             space = space -1;  
//             num = num+2;  
//         }  
//         if(space <i)  
//         {  
//             space = space + 1;  
//             num = num -2;  
//         }  
//         printf("\n");  
//     }         
// }
// ////////////////////////////////////
/*
   1
  2 3
 4 5 6
7 8 9 10
*/
// #include<stdio.h>    
// int main()  
// {    
//     int i, j, rows, k,v = 1;  
//     printf ("Enter a number of rows: ");  
//     scanf("%d", &rows);   
//     printf("\n");  
//     for (i = 1; i <= rows; i++)   
//     {  
//         for (j = i; j < rows; j++)   
//         {  
//             printf(" ");   
//         }  
//         for (k = 1; k <= i; k++)  
//         {  
//             printf("%d ",v); // print the Star  
//             v++;
//         }  
//         printf("\n");   
//     }  
//     return 0;
// }
// ///////////////////////////////////
/*
******
 *****
  ****
   ***
    **
     *
*/
// #include<stdio.h>
// int main(){
//     int r;
//     printf("Enter number of rows: ");
//     scanf("%d",&r);
//     for(int i=r; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=r; k>=i; k--){
//            printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=0; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf(" ");
//         }
//         for(int k=r; k>=i; k--){
//            printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////////////////////////////
/*
    * * * * * * 
    *
    *
    *
    *
    * * * * * *
    *
    *
    *
    *
    * * * * * *
*/
// #include<stdio.h>
// int main(){
//   for(int i=0; i<=10; i++){
//     printf("* ");
//     if(i==0||i==5||i==10){
//       for(int j=0; j<=4; j++){
//         printf("* ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }
// //////////////////////////////
/*
    *
    *
    *
    *
    * * * *
*/
// #include<stdio.h>
// int main(){
//   for(int i=1; i<=5; i++){
//     printf("*");
//     if(i==5){
//     printf(" ");
//     for(int j=1; j<=3; j++){
//       printf("* ");
//     }}
//     printf("\n");
//   }
//   return 0;
// }
// ///////////////////////////////
/*
  *         *
  *         *
  *         *
  *         *
  * * * * * *
  *         *
  *         *
  *         *
  *         *
*/
// #include<stdio.h>
// int main(){
//   for(int i=1; i<=9; i++){
//     if(i==5){
//       for(int i=1; i<=6; i++){
//       printf("* ");
//     }
//     printf("\n");
//     }
//     else{
//     for(int i=0; i<1; i++){
//       printf("*");
//     }
//     for(int i=0; i<=8; i++){
//       printf(" ");
//     }
//     for(int i=0; i<1; i++){
//       printf("*");
//     }
//     printf("\n");
//   }}
//   return 0;
// }
// ///////////////////////////////
// #include<stdio.h>
// void star(int a);
// int main(){
//   int a=5;
//   for(;;){
//     for(int j=0; j<5; j++){
//       star(a);
//       a--;
//     }
//     if(a==0){
//       a++;
//       for(int k=0; k<4; k++){
//         ++a;
//         star(a);
//       }
//     }
//     break;
//   }
//   return 0;
// }
// void star(int a){
//   for (int i = 0; i < a; i++)
//   {
//     printf("*");
//   }
//   printf("\n");
// }
// //////////////////////////////////////////
// ARPIT
// #include<stdio.h>
// void main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num-i; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i || i==num-1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");

//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i=1; i<num; i++){
//         for(int j=1; j<num; j++){
//             if(i==num-1 || j==1 || i==1 || j==num-1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     for(int i=2; i<num; i++){
//         for(int j=1; j<=i; j++){
//             if(j==1 || j==i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i=1; i<num; i++){
//         for(int j=1; j<num; j++){
//             if(i==1 || j==1 || i==num-1 || j==num-1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     for(int i=1; i<=3; i++){
//         printf("*\n");
//     }
//     printf("\n");
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num; j++){
//             if(i==1 || i==num || j==num-2){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i=1; i<=num; i++){
//         for(int j=1; j<=num; j++){
//             if(i==1 || j==num-2){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// AYUSH
// #include<stdio.h>
// int main(){
//   for(int i=0; i<6; i++){
//     for(int j=0; j<6-i; j++){
//       printf(" ");
//     }
//     for(int k=0; k<=i; k++){
//       if(i==2 && k==0)
//       continue;
//       printf("* ");
//     }
//     printf("\n");
//   }
//   return 0;
// }