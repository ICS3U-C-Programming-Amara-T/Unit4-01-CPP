// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: April 8, 2025
// This is a program gets the sum of a number

#include <iostream>
#include <string>

int main() {
    // Define variables
    std::string userAsString;
    int userAsNumber;

    // Initialize Counter
    int loopCounter = 0;
    int sum = 0;

    // Ask user for a positive number
    std::cout << "Enter a positive number: ";
    std::cin >> userAsString;

    // Check if the user's age matches the grandparents' criteria
    try {
        userAsNumber = std::stoi(userAsString);
        while (loopCounter < userAsNumber) {
            loopCounter = loopCounter + 1;
            sum = loopCounter + sum;
            std::cout << "The sum is: " << sum << std::endl;
        }
        std::cout << "Final sum: " << sum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid number ";
    }
    std::cout << " Thanks for playing!" << std::endl;
}
