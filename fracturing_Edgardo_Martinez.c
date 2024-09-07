//****************************
// fracturing_Edgardo_Martinez.c
// Author: Edgardo Martinez
// UCFID: 5628658
// Date: 09/01/24
// Class: COP 3223, Professor Parra
// Purpose: This program asks for coordinates and displays the calculations and coordinates
// Input: Coordinates
//
// Output: Show calculations
//********************************
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function for getting user input

double ask_for_user_input() {
    double input;
    scanf("%lf", &input);

    return input;
}

double calculate_distance() {
    printf("Enter the coordinates of two points: (x1, y1) and (x2, y2)\n");
    double x1 = ask_for_user_input();
    double y1 = ask_for_user_input();
    double x2 = ask_for_user_input();
    double y2 = ask_for_user_input();

    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Calculate the distance between the two points
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

double calculate_perimeter() {
    double distance = calculate_distance();

    double perimeter = PI * distance; // Calculate the perimeter
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 1.5;
}

double calculate_area() {
    double distance = calculate_distance();

    double area = PI * pow(distance / 2, 2); // Calculate the area
    printf("The area of the city encompassed by your request is %f\n", area);

    return 2;
}

double calculate_width() {
    double distance = calculate_distance(); // The width is the same as the distance
    printf("The width of the city encompassed by your request is %f\n", distance);

    return 1;
}

double calculate_height() {
    double distance = calculate_distance(); // The height is the same as the distance
    printf("The height of the city encompassed by your request is %f\n", distance);

    return 1;
}

int main(int argc, char **argv) {

    // Call all the functions

    calculate_distance();
    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();

    return 0;
}
