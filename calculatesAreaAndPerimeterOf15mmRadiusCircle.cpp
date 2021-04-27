// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: april 2021
// This is the program that calculates area and perimeter of a 15mm radius circle

#include <iostream>
#include <cmath>

int main()    {
    std::cout << "What is the perimeter and area of a 15mm radius circle?"
    << std::endl;
    std::cout << std::endl;
    std::cout << "Area:" << (M_PI*pow(15,2)) << std::endl;
    std::cout << "Perimeter:" << (M_PI*2*15) << std::endl;
}
