#include <stdio.h>
int findGCD(int, int);

int main() {
    int n;
    printf("Enter number of numbers: ");
    scanf("%d",&n);
    int array[n];
    for(int k=0; k<n; k++){
        printf("Enter n%d: ",k+1);
        scanf("%d",&array[k]);
    }
    int lcm = array[0];;
    int  gcd = array[0];
 
    //Loop through the array and find GCD
    //use GCD to find the LCM
    for(int i=0; i<n; i++){
      gcd = findGCD(array[i], lcm);
      lcm = (lcm*array[i])/gcd;
    }
    printf("HCF: %d\n", gcd);
    printf("LCM: %d", lcm);
}

//Function returns GCD of a and b
int findGCD(int a, int b){
    if(b==0)
        return a;
    return findGCD(b, a%b);
}