// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: October 2022
// This program calculates the surface area of a cube
//    with user input

#include <cmath>
#include <iostream>

int main() {
    // this function calculates surface area of a cube
    double lengthOfSquare;
    double widthOfSquare;
    double areaOfSquare;
    double surfaceAreaOfCube;

    // input
    std::cout << "Enter length of the square (cm): ";
    std::cin >> lengthOfSquare;
    std::cout << "Enter width of the square (cm): ";
    std::cin >> widthOfSquare;

    // process
    areaOfSquare = lengthOfSquare * widthOfSquare;
    surfaceAreaOfCube = 6 * areaOfSquare;

    // output
    std::cout << "\nArea is " << (surfaceAreaOfCube) << " cm²." << std::endl;

    std::cout << "\nDone." << std::endl;
}
