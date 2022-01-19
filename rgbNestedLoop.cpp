// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 14, 2022
// This program prints out all of the possible RGB
// values up to 50 for each colour

#include <iostream>
#include <iomanip>


int main() {
    int counter1;
    int counter2;
    int counter3;

    // Initialize the three counters
    counter1 = 0;
    counter2 = 0;
    counter3 = 0;

    // Print intro message
    std::cout << "Here are all of the RGB values up to 50\n";

    // Loop that counts the Red number
    for (counter1 = 0; counter1 <= 50; counter1++) {
                // Loop that counts the Green number
        for (counter2 = 0; counter2 <= 50; counter2++) {
                        // Loop that counts the Blue number
            for (counter3 = 0; counter3 <= 50; counter3++) {
                std::cout << "RGB " << counter1 << " ";
                std::cout << counter2 << " " << counter3 << "\n";
            }
        }
    }
}
