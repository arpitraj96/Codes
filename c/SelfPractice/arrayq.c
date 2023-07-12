// Sum of all elements stored in a array.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     // int arr[] = {1,2,3};
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     // int size = sizeof(arr)/sizeof(int);
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     printf("Sum = %d",sum);
//     return 0;
// }
// /////////////////////////////////////////////

//Sum of even and odd elements in an Array.
// #include<stdio.h>
// int main(){
//      int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int esum=0, osum=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             esum += arr[i];
//         }
//         else{
//             osum += arr[i];
//         }
//     }
//     printf("Sum of even elements are = %d\n",esum);
//     printf("Sum of odd elements are = %d",osum);
//     return 0;
// } 
// /////////////////////////////////////////////////////

// To find maximum in a array.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int max = arr[0];
//     for(int i=0; i<n; i++){
//         if(max>=arr[i]){
//             continue;
//         }
//         else{
//             max = arr[i];
//         }
//     }
//     printf("Greatest element = %d",max);
//     return 0;
// }
// //////////////////////////////////////////////////

// To find maximum and second maximum in a array.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int max = 0;
//     int smax = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]>=max){
//             smax = max;
//             max = arr[i];
//             continue;
//         }
//         else if(arr[i]>=smax){
//             smax = arr[i];
//         }
//     }
//     printf("%d  %d",max,smax);
//     return 0;
// }
// //////////////////////////////////////////

// To reverse elements in an array.
// #include<stdio.h>
// int main(){
//      int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             int t;
//             t = arr[i];
//             arr[i] = arr[j];
//             arr[j] = t;
//         }
//     }
//     for(int i=0; i<n; i++){
//         printf("%d  ",arr[i]);
//     }
//     return 0;
// }
// ////////////////////////////////////

// To insert any element at any location.
// #include<stdio.h>
// int main(){
//      int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n+1];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("{");
//     for(int i=0; i<n; i++){
//         if(i==n-1)
//         printf("%d}",arr[i]);
//         else
//         printf("%d, ",arr[i]);
//     }
//     printf("\n");
//     int e,in;
//     printf("Enter the element and the index value: ");
//     scanf("%d,%d",&e,&in);
//     in++;
//     if(in<=n+1){
//         for(int i=n; i>=in;i--){
//             arr[i+1] = arr[i];
//         }
//         arr[in] = e;
//         printf("After insertion: \n");
//         printf("{");
//         for(int i=0; i<n+1; i++){
//             if(i==n)
//             printf("%d}",arr[i]);
//             else
//             printf("%d, ",arr[i]);
//         }
//     }
//     else{
//         printf("Out of range INDEX");
//     }
//     return 0;
// }
// //////////////////////////////////////////////

// To delete any element at any location.
// #include<stdio.h>
// int main(){
//      int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("{");
//     for(int i=0; i<n; i++){
//         if(i==n-1)
//         printf("%d}",arr[i]);
//         else
//         printf("%d, ",arr[i]);
//     }
//     printf("\n");
//     int in;
//     printf("Enter the index value: ");
//     scanf("%d",&in);
//     // in++;
//     if(in<=n){
//         for(int i=in; i<n;i++){
//             arr[i-1] = arr[i];
//         }
//         printf("After deletion: \n");
//         printf("{");
//         for(int i=0; i<n-1; i++){
//             if(i==n-2)
//             printf("%d}",arr[i]);
//             else
//             printf("%d, ",arr[i]);
//         }
//     }
//     else{
//         printf("Out of range INDEX");
//     }
//     return 0;
// }
//////////////////////////////////////////////

// To find duplicate elements in a array.
// #include<stdio.h>
// int main(){
//      int n;
//     printf("Enter number of elements you want to stored: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int darr[n];
//     for(int i=0; i<n; i++){
//         darr[i] = 0;
//     }
//     int flag = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 for(int k=0; k<i; k++){
//                     if(darr[k]==arr[i]){
//                         flag = 1;
//                         continue;
//                     }
//                 }
//                 if(flag==0){
//                     darr[i] = arr[i];
//                 }
//             }
//         }
//         flag = 0;
//     }
//     printf("Duplicate elements are:\n");
//     for(int k=0; k<n; k++){
//         if(darr[k]!=0){
//             printf("%d   ",darr[k]);
//         }
//     }
//     return 0;
// }
// ///////////////////////////////////////////////////

// WAP to print the highest frequency character in string.
// #include <stdio.h>
// #include <string.h>
// char s1[100], visited[100];
// int count[100] = {0}, flag = 0;
// int main()
// {
//     int i, j = 0, k = 0, l, max, index;
//     printf("Enter a string : ");
//     scanf("%[^\n]s", s1);
//     l = strlen(s1);
//     for(i=0; i<l; i++){
//         if(i==0){
//             visited[j++] = s1[i];
//             count[j-1]++;
//         }
//         else{
//             for(k=0; k<j; k++){
//                 if(s1[i]==visited[k]){
//                     count[k]++;
//                     flag = 1;
//                 }
//             }
//             if(flag==0){
//                 visited[j++] = s1[i];
//                 count[j-1]++;
//             }
//             flag = 0;
//         }
//     }
//     for(i = 0; i < j; i++){
//         if((i == 0) && (visited[i] != ' ')){
//             max = count[i];
//             continue;
//         }
//         if((max < count[i]) && (visited[i] != ' ')){
//             max = count[i];
//             index = i;
//         }
//     }
//     printf("\nMax repeated character in the string = %c ", visited[index]);
//     printf("\nIt occurs %d times", count[index]);
//     return 0;
// }