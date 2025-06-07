// 41. Provide an example demonstrating the declaration and initialization of a structure named “Point” , Also display the coordinates. Hint : P(x,y) In mathematics a point is having two coordinates i.e. x and y.
#include <stdio.h>

// Declare the structure
struct Point {
    int x;
    int y;
};

int main() {
    // Initialize a Point variable
    struct Point p1 = {10, 20};

    // Display the coordinates
    printf("The point is: P(%d, %d)\n", p1.x, p1.y);

    return 0;
}
