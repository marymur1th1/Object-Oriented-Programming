/*
Calculating the volume of a cylinder     

Author: Mary Muthoni
Reg No: BSE-05-0185/2024
Date: 24/1/2025
Version 1
*/

#include <iostream>
#include <cmath> // Optional, only if you need std::pow()

// Function to calculate the volume of a cylinder
double cylinderVolume(double radius, double height) {
    const double PI = 3.141592653589793;  // Define π manually
    return PI * std::pow(radius, 2) * height; // V = πr²h
}

int main() {
    double radius, height;

    // Prompt user for input
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate volume
    double volume = cylinderVolume(radius, height);

    // Display the result
    std::cout << "The volume of the cylinder is: " << volume << std::endl;

    return 0;
}
