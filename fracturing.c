// Author: Adam Sheikh
// UCFID: 5056740

#include <stdio.h>
#include <math.h>

// Declaring preprocessor directive
#define PI 3.14159

// Declaring functions
double calculateDistance()
double calculatePerimeter()
double calculateArea()
double calculateWidth()
double calculateHeight()

int main(int argc, char **argv) {
    // Calling each function
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight()

    return 0;
}

// Function to calculate distance
double calculateDistance() {
    double x1, y1, x2, y2;

    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double width = fabs(distance); 
    double height = fabs(distance);

    double perimeter = 2 * (width+height);

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return difficulty
    return 5.0;
}

// Function to calculate area
double calculateArea() {
    double distance = calculateDistance();
    double width = fabs(distance);
    double height = fabs(distance);

    double area = width * height;

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 4.0;
}

// Function to calculate width
double calculateWidth() {
    double x1, x2;

    printf("Enter x1 and x2");
    scanf("%lf %lf", &x1, &x2);

    double width = fabs(x2 - x1);

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 5.0;
}

// Function to calculate height
double calculateHeight() {
    double y1, y2;

    printf("Enter y1 and y2: ");
    scanf("%lf %lf", &y1, &y2);

    double height = fabs(x2 - x1);

    printf("the height of the city encompassed by your request is %.2lf\n", height);

    return 5.0;
}







}







