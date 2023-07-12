/*
// Strings:
    A character array terminated by a '\0' (null character) 
    Null character denotes string termination
EXAMPLE
char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
char class[ ] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};
*/
#include<stdio.h>
void printString(char arr[]);

int main(){
    // char name[] = {'A','R','P','I','T','\o'}; 
    char fname[] = "ARPIT";
    char lname[] = "Raj";
    printString(fname);
    printf(lname);
    return 0;
} 
void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}