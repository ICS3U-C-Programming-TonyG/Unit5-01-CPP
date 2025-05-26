// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-05-26

// Farenheit to Celsius

#include <iostream>

float getFahrenheit() {
    float fahrenheit;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    return fahrenheit;
}

void convertToCelsius() {
    float fahrenheit = getFahrenheit();
    float celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << fahrenheit << "°F is " << celsius << "°C" << std::endl;
}

int main() {
    convertToCelsius();
}
