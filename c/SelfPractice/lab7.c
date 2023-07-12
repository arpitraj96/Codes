// Find the frequency of a element in the Array
// #include<stdio.h>
// int main(){
//     int arr1[] = {1,2,3,7,4,5,6,7,8,9,7,10};
//     int size = sizeof(arr1)/sizeof(int);
//     int ele = 7;
//     int f=0;
//     for(int i=0; i<size; i++){
//         if(arr1[i]==ele){
//             f++;
//         }
//     }
//     printf("%d is present at %d index",ele,f);
//     return 0;
// }
// //////////////////////////////////////////////////////////////////
// WAP to cocatenate two strings without using strcat() func
// #include<stdio.h>
// int main(){
//     char s1[100] = "Prashant ";
//     char s2[] = "Singh";
//     int length = 0;
//     while (s1[length] != '\0') {
//         ++length;
//     }
//     for(int i = 0; s2[i]!='\0'; length++,i++){
//         s1[length] = s2[i];
//     }
//     s1[length] = '\0';
//     printf("%s",s1);
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////////
// WAP which compares two strings without using strcmp() function.
// #include<stdio.h>
// int main(){
//     int flag = 0;
//     char s1[] = "Arpit";
//     char s2[] = "Arpit";
//     int size1 = sizeof(s1);
//     int size2 = sizeof(s2);
//     if(size1==size2){
//         for(int i=0; i<size1; i++){
//             if(s1[i]==s2[i]){
//                 flag = 1;
//             }
//             else{
//                 flag = 0;
//             }
//         }
//     }
//     (flag==1)?printf("Strings are same"):printf("Strings are not same");
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////
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
// //////////////////////////////////////////////////////////////////////
// WAP to stores 10 student information using structure.
// #include<stdio.h>
// #include<string.h>
//  struct studinfo
//     {
//         char name[100];
//         int roll;
//     }s[10];
// int main(){
//     for(int i=0; i<5; i++){
//         printf("Enter name Student%d: ",i+1);
//         scanf("%s",&s[i].name);
//         printf("Enter roll number: ");
//         scanf("%d",&s[i].roll);
//     }
//     printf("\n\n");
//     for(int j=0; j<5; j++){
//         for(int i=j; i<=j; i++){
//             printf("Student%d\n",i+1);
//             printf("Name: ");
//             puts(s[i].name);
//             printf("Roll no: %d\n",s[i].roll);
//         }
//     }
//     return 0;
// }
// ////////////////////////////////////////////////////////////
// WAP for linear search
// #include<stdio.h>
// int linearsearch(int arr[], int ele, int size)
// {
//     for(int i=0; i<size; i++){
//         if(arr[i]==ele){
//             return i;
//         }
//     }
// }
// int  main(){
//     int arr[]={6,9,7,1};
//     printf("%d",linearsearch(arr,9,4));
// }
// //////////////////////////////////////////////////
// Wap for binary search
// #include <stdio.h>
// int binarysearch(int arr[], int ele, int size){
//     int f=0,l=size-1,mid;
//     while (f<l){
//         mid=(f+l)/2;
//         if(arr[mid]==ele){
//             return mid;
//         }
//         else if(arr[mid]>ele){
//             l=mid-1;
//         }
//         else{
//             f = mid + 1;
//         }
//     }
// }
// int main(){
//     int arr1[] = {1, 4, 7, 5, 2};
//     printf("%d", binarysearch(arr1, 7, 5));
//     return 0;
// }
// #include <stdio.h>    
// int main()  
// {    
//     int i, j, rows, k;  
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
//             printf("* "); // print the Star  
//         }  
//         printf("\n");   
//     }  
//     return 0;
// }
// Wap to find duplicate elements in a array
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
//     printf("Duplicate elements are:\n");
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 printf("%d  ",arr[i]);
//             }
//         }

//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {   
//     int a, b;
//     char ch;
//     printf("Enter any character among +,-,*,/: ");
//     scanf("%c",&ch);
//     printf("Enter both the numbers: ");
//     scanf("%d, %d",&a,&b);
//     switch(ch)
//     {
//         case '+':
//             printf("%d+%d=%d",a,b,(a+b));
//             break;
//         case '-':
//             printf("%d-%d=%d",a,b,(a-b));
//             break;
//         case '*':
//             printf("%d*%d=%d",a,b,(a*b));
//             break;
//         case '/':
//             printf("%d/%d=%d",a,b,(a/b));
//             break;
//         default:
//             printf("Wrong Input!");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char s[100];
//     gets(s);
//     printf("%s",s);
//     return 0;
// }
// #include<stdio.h>
// int strlen(char s[]);
// int main(){
//     char str[20];
//     printf("Enter any string: ");
//     gets(str);
//     printf("Length of the string is %d",strlen(str));
//     return 0;
// }
// int strlen(char s[]){
//     int l=0;
//     for(int i=0; s[i]!='\0'; i++){
//         l++;
//     }
//     return l;
// }

#include<stdio.h>
int main(){
  int n;
  int sum=0;
  for(int i=1; ;i++){
    printf("Enter number: ");
    scanf("%d",&n);
    for(int j=1; n!=0; ){
      sum+=n;
    }
  }
  printf("%d",sum);
  return 0;
}