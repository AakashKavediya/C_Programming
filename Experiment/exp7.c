#include <stdio.h>
#include <math.h>

int main(){
    int count = 0, num, result = 0;
    printf("Enter a int number: \n");
    scanf("%d", &num);

    int temp = num;

    while(temp != 0){
        temp /= 10;
        count++;
    }

    printf("There are %d digits in the number\n", count);

    temp = num;
    while (temp != 0){
        int digit = temp % 10;
        temp /= 10;
        result += pow(digit, count);
    }

    printf("The armstrong sum is %d\n", result);

    if(result == num){
        printf("The number is Armstrong.\n");
    } else {
        printf("The number is not Armstrong.\n");
    }

    return 0;
}
