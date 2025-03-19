// Write the output of the following program
#include <stdio.h>

int main() {
    int x = 0, y = 20, res;
    res = y++ + x++;
    res += +y + ++x;
    printf("\n x=%d y=%d result=%d", x, y, res);
    return 0;
}


// x = 2 y = 22 result = 44