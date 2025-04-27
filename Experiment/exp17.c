#include <stdio.h>

void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a, b;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    printf("Enter 2nd number: ");
    scanf("%f", &b);

    swap(&a, &b); // Swapping done here

    printf("After swapping:\n");
    printf("The 1st number: %.2f\n", a);
    printf("The 2nd number: %.2f\n", b);

    return 0;
}
