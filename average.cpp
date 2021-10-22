// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate average

#include <iostream>
#include <random>

int main() {
    // This Program calculate average
    int myNumbers[10];

    int arrSize = sizeof(myNumbers)/sizeof(myNumbers[0]);
    int loopNumberFirst;
    int loopNumberSecond;
    float totalNumber;
    int calculateNumber;
    float average_number;

    // process
    for (loopNumberFirst = 0; loopNumberFirst < 10; loopNumberFirst++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        calculateNumber = idist(rgen);
        myNumbers[loopNumberFirst] = calculateNumber;
    }

    // output
    std::cout << "10 random numbers between 1 and 100:" << std::endl;
    std::cout << "" << std::endl;

    // process
    for (loopNumberSecond = 0; loopNumberSecond < arrSize; loopNumberSecond++) {
        totalNumber = totalNumber + myNumbers[loopNumberSecond];
        // output
        std::cout << "The random number is "
        << myNumbers[loopNumberSecond] << std::endl;
    }

    average_number = totalNumber / arrSize;

    std::cout << "" << std::endl;
    std::cout << "Answer: " << average_number << std::endl;

    std::cout << "\nDone" << std::endl;
}
