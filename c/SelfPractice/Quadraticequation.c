// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c;
//     printf("Roots For Quadratic Equation\n");
//     printf("Enter value of a: ");
//     scanf("%d",&a);
//     printf("Enter value of b: ");
//     scanf("%d",&b);
//     printf("Enter value of c: ");
//     scanf("%d",&c);
//     int d,r1,r2;
//     d = sqrt(pow(b,2)-4*a*c);
//     r1 = (-b+d)/2*a;
//     r2 = (-b-d)/2*a;
//     printf("Root 1 = %d\n",r1);
//     printf("Root 2 = %d\n",r2);
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter value of a: ");
    scanf("%lf",&a);
    printf("Enter value of b: ");
    scanf("%lf",&b);
    printf("Enter value of c: ");
    scanf("%lf",&c);
    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 