// Write a program to find all the roots of a quadratic equation using if-else ladder.
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,disc,root1,root2, img, real;
    printf("Enter the coefficient of the quadratic equation a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        printf("It is not a quadratic equation");
    }else{
        disc = pow(b,2)-(4*a*c);
        if(disc == 0){
            printf("The roots are Real and equal\n");
            root1 = -b/(2*a);
            root2 = root1;
            printf("Root1 = %.2f \n Root2 = %.2f", root1, root2);
        }else if(disc > 0){
            printf("The roots are Real and Distinct\n");
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("Root1 = %.2f \n Root2 = %.2f", root1, root2);
        }else{
            printf("The roots are Imaginary\n");
            img = sqrt(-disc)/(2*a);
            real = -b / (2 * a);
            printf("Root1 = %.2f + i%.2f \n Root2 = %.2f - i%.2f", real,img,real,img);
        }
    }
}