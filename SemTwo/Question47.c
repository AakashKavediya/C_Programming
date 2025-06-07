// 47. Write a program that calculates the roots of quadratic equation.
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,root1,root2, img, real,dis;
    printf("Enter   3 coeff of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    dis = (b*b) - (4*a*c);
    printf("Discriminant = %f", dis);
    if(dis > 0){
        printf("The roots are real and distinct");
        root1 = (-b + sqrt(dis))/(2*a);
        root2 = (-b - sqrt(dis))/(2*a);
        printf("Root1 = %f \n Root2 = %f", root1, root2);
    }
    else if(dis == 0){
        printf("The roots are real and equal");
        root1 = -b/(2*a);
        root2 = root1;
        printf("Root1 = %f \n Root2 = %f", root1, root2);
    }
    else{
        printf("Roots are real and img");
        real = -b/(2*a);
        img = sqrt(-dis)/(2*a);
        printf("Root1 = %f + %fi \n Root2 = %f - %fi", real,img,real,img);

    }
}