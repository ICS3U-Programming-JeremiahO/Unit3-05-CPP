// Copyright 2022 jeremiah omoike immaculata high school
// Created by: Jeremiah omoike
// Created on: October 13 2022
// This program asks the user for the month as a number between 1 and 12
//then displays the month as a string to user 


#include <iostream>

int main() {
    // declare variables
    int userMonth;

    // input..... ask user for month 
    std::cout << "Enter Enter the number for a month (ex: 5 for May ): ";
    std::cin >> userMonth;

    // state month selected as a string 
    switch (userMonth) {
        case 1 :
            std::cout << userMonth << " represents January.\n";
            break;
        case 2 :
            std::cout << userMonth << " represents Febuary.\n";
            break;
        case 3 :
            std::cout << userMonth << " represents March.\n";
            break;
        case 4 :
            std::cout << userMonth << " represents April.\n";
            break;
        case 5 :
            std::cout << userMonth << " represents May.\n";
            break;
        case 6 :
            std::cout << userMonth << " represents June.\n";
            break;
        case 7 :
            std::cout << userMonth << " represents July.\n";
            break;
        case 8 :
            std::cout << userMonth << " represents August.\n";
            break;
        case 9 :
            std::cout << userMonth << " represents September.\n";
            break;
        case 10 :
            std::cout << userMonth << " represents October.\n";
            break;
        case 11 :
            std::cout << userMonth << " represents November.\n";
            break;
        case 12 :
            std::cout << userMonth << " represents December.\n";
            break;
            // error case
        default :
            std::cout << "Error." << userMonth << "does not represent a month.\n";
    }
}