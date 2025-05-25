// Program to enter two points and then calculate the distance between them using structure

#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

int main() {
    struct Point point1, point2;
    
    printf("Enter x and y for Point 1: ");
    scanf("%f %f", &point1.x, &point1.y);

    printf("Enter x and y for Point 2: ");
    scanf("%f %f", &point2.x, &point2.y);

    float distance = calculateDistance(point1, point2);
    
    printf("The distance between the two points is: %.2f\n", distance);
    
    return 0;
}
